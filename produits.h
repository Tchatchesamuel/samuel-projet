#include <iostream>
/*procedure qui faire la produit  de deux matrice carre M2×2*/
void produit2(int m1[2][2], int m2[2][2], int result[2][2]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      result[i][j] =0;
     for (int k=0 ;k<2 ;k++)
       result[i][j] += m1[i][k] * m2[k][j];
    }
  }
}
/*procedure qui calcule produit de deux matrices carres M3×3*/
void produit3(int m1[3][3], int m2[3][3], int result[3][3]) {
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        result[i][j] =0;
        for(int k=0;k<3;k++){
           result[i][j] += m1[i][k]* m2[k][j];
         }
       }
     }
  }