#pragma once
template <typename Type>
class Matrix
{
private:
	int sizeColums;
	int sizeRows;
	Type *Matrix;
public:
	Matrix();
	Matrix(Matrix & A);

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
