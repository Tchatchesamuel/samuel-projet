#include <iostream>

/* Function to calculate the determinant of a 2x2 matrix */
int detM2(int ma[2][2]) {
    return (ma[0][0] * ma[1][1]) - (ma[0][1] * ma[1][0]);
}

/* Function to calculate the determinant of a 3x3 matrix */
int detM3(int ma[3][3]) {
    return ma[0][0] * (ma[1][1] * ma[2][2] - ma[1][2] * ma[2][1]) 
         - ma[0][1] * (ma[1][0] * ma[2][2] - ma[1][2] * ma[2][0])  
         + ma[0][2] * (ma[1][0] * ma[2][1] - ma[1][1] * ma[2][0]);
}
