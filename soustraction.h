#include <iostream>

/* Procedure to subtract two 2x2 matrices */
void soust2(int m1[2][2], int m2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

/* Procedure to subtract two 3x3 matrices */
void soust3(int m1[3][3], int m2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
         result[i][j] = m1[i][j] - m2[i][j];
        }
    }
}
