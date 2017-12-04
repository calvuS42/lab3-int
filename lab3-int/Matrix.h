#pragma once
template <typename Type>
class Matrix
{
private:
	int sizeColums; // кількість стовпців
	int sizeRows;	// кількість рядків
	Type Matrix[sizeColums][sizeRows];
public:
	Matrix();
	Matrix(Matrix & A);
	Matrix(int, int);
	Matrix operator +(Matrix A);
	Matrix operator -(Matrix A);
	Matrix operator *(Matrix A);
	Matrix operator ~(Matrix A);
};

template<typename Type>
inline Matrix<Type>::Matrix()
{
	sizeColums = 0;
	sizeRows = 0;
	Matrix = {};
}

template<typename Type>
inline Matrix<Type>::Matrix(Matrix & A)
{
	sizeColums = A.sizeColums;
	sizeRows = A.sizeRows;
	Matrix = A.Matrix;
}

template<typename Type>
inline Matrix<Type>::Matrix(int a, int b)
{
	sizeColums = a;
	sizeRows = b;
	Matrix = new Type[a][b];
}

template<typename Type>
inline Matrix Matrix<Type>::operator+(Matrix A)
{
	if (sizeColums == A.sizeColums && sizeRows == A.sizeRows) {
		Matrix b(sizeColums, sizeRows);
		for (int i = 0; i < sizeColums; i++) {
			for (int j = 0; j < sizeRows; j++) {
				b.Matrix[i][j] = Matrix[i][j] + A.Matrix[i][j];
			}
		}
		return b;
	}
	else return;
}

template<typename Type>
inline Matrix Matrix<Type>::operator-(Matrix A)
{
	if (sizeColums == A.sizeColums && sizeRows == A.sizeRows) {
		Matrix b(sizeColums, sizeRows);
		for (int i = 0; i < sizeColums; i++) {
			for (int j = 0; j < sizeRows; j++) {
				b.Matrix[i][j] = Matrix[i][j] - A.Matrix[i][j];
			}
		}
		return b;
	}
	else return;
}

template<typename Type>
inline Matrix Matrix<Type>::operator*(Matrix A)
{
	if (sizeColums == A.sizeRows) {
		Matrix b(sizeRows, A.sizeColums);
		for (int i = 0; i < b.sizeColums; i++) {
			for (int j = 0; j < b.sizeRows; j++) {
				for (int k = 0, c = 0; k < sizeColums, c < A.sizeRows; k++, c++) {
					b.Matrix[i][j] += Matrix[k][j] + A.Matrix[i][c];
				}
			}
		}
	}
}



template<typename Type>
inline Matrix Matrix<Type>::operator~(Matrix A)
{
	return Matrix();
}
