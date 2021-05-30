#include "Matrix.hpp"
#include "Vector.hpp"

int main(){
    std::cout<< "Hello"<< std::endl;    
    Matrix mat1(2, 2);
    mat1.getMatrix();
    std::cout<< mat1;
    Matrix mat2(2, 2);
    mat2.getMatrix();
    Matrix mat3 = mat1 + mat2;
    std::cout<< mat3;
    mat3 = mat3 * 2;
    std::cout<< mat3;
}