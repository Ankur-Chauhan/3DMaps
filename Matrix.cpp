#include "Matrix.hpp"

Matrix::Matrix(const int row, const int col) : store(row, std::vector<int>(col, 0)), _row(row), _col(col){
}

Matrix::~Matrix(){
}

std::ostream& operator<<(std::ostream& out, const Matrix& mat){
    std::cout<< "Matrix:"<< std::endl;
    for(int i = 0; i < mat.row(); i++){
        for(int j = 0; j < mat.col(); j++){
            out<< mat.store[i][j]<< "\t";
        }
        out<< std::endl;
    }
    return out;
}

void Matrix::getMatrix(){
    for(int i = 0; i < _row; i++){
        for(int j = 0; j < _col; j++){
            std::cout<< "Element["<< i<<"]["<< j<< "]:";
            std::cin>> this->store[i][j];
        }
        std::cout<< std::endl;
    }
}

Matrix Matrix::operator+(const Matrix& argMat){
    Matrix newMatrix(argMat.row(), argMat.col());
    for(int i = 0; i < _row; i++){
        for(int j = 0; j < _col; j++){
            newMatrix.store[i][j] = this->store[i][j] + argMat.store[i][j];
        }
    }
    return newMatrix;
}

// Matrix&& Matrix::operator*(const Vector& argVec){
    
// }

Matrix Matrix::operator*(const int argInt){
    Matrix newMatrix(_row, _col);
    for(int i = 0; i < _row; i++)
        for(int j = 0; j < _col; j++)
            newMatrix.store[i][j] = this->store[i][j] * argInt;
    return newMatrix;
}