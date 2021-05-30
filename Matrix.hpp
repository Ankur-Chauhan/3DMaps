#ifndef F84DC32B_E4BF_48D7_8D33_57550732BB4C
#define F84DC32B_E4BF_48D7_8D33_57550732BB4C

#include "Vector.hpp"

class Matrix
{
    std::vector<std::vector<int>> store;
    int _row;
    int _col;
public:

    Matrix(const int, const int);
    ~Matrix();

    void getMatrix();
    int row()const{ return _row;}
    int col()const{ return _col;}
    Matrix operator *(int);
    //Matrix operator *(const Vector&);
    Matrix operator +(const Matrix&);
    friend std::ostream& operator<<(std::ostream&, const Matrix&);
};


#endif /* F84DC32B_E4BF_48D7_8D33_57550732BB4C */
