#include <iostream>
/*procedure qui faire la transposer d'une matrice carre M2×2*/
void transpose2(int m1[2][2],  int result[2][2]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      result[j][i] = m1[i][j];
    }
  }
}		
/* procedure qui faire la transpose d'une matrice carre M3×3*/
void transpose3(int m1[3][3], int result[3][3]) {
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
           result[j][i] = m1[i][j];
             }
        }
     }		
  