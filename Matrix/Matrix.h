
#ifndef Matrix
#define Matrix


#include <cstdlib>
#include <vector>


using std::vector;

template <typename T> class Matrix {

public:
	Matrix(unsigned _rows, unsigned _cols, const T& _initials);
	Matrix(const Matrix<T>& orig);
	virtual ~Matrix();

	//Access individual elements
	T& operator()(const unsigned& row, const unsigned& col);
	const T& operator()(const unsigned& row, const unsigned& col) const;

	//Access the rows and columns sizes
	unsigned get_rows() const;
	unsigned get_cols() const;

private:
	unsigned rows;
	unsigned cols;
	vector<vector<T>> mat;

};

#include "Matrix.cpp" //the compiler needs to see the declaration and the implementation of the template at the same time!
#endif

