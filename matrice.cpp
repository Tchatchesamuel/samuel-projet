#include <iostream>
#include "determinent.h"
#include "soustraction.h"
#include "addition.h"
#include "transposer.h"
#include "produits.h"
#include "trace.h"
#include "afficher.h"

int main(int argc, char** argv) {
    int ma1[2][2] = {{0, 0}, {0, 0}}, ma2[2][2] = {{0, 0}, {0, 0}}, 
        ma3[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, ma4[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, 
        result2[2][2] = {{0, 0}, {0, 0}},result3[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    
    int a = 0;
    int i = 0, j = 0,b;
    
    std::cout << "Entrer 2 pour une matrice 2X2 et 3 pour une matrice 3X3" << std::endl;
    std::cin >> a; 
   while (a != 2 && a != 3) {

    std::cout << "Entrer 2 pour une matrice 2X2 et 3 pour une matrice 3X3" << std::endl;
    std::cin >> a; 
    
   
   }
   
    // Récupération de la dimension de la matrice
    if (a == 2) {
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {   
                std::cout << "composante" << "["<< i+1<<  "," << j+1<< "]"<< std::endl;
                std::cout << "Entrez les termes de la première matrice: ";
                std::cin >> ma1[i][j]; 
                std::cout << "Entrez les termes de la seconde matrice: ";
                std::cin >> ma2[i][j]; 
            }
        }
        // aficher les matrice 
        std::cout << "affichage de la matrice 1 :"<< std::endl;
        affiche2(ma1);
         std::cout << std::endl;
        std::cout << "affichage de la matrice 2 :"<< std::endl;
        affiche2(ma2);
    
        //calcul de la somme des deux matrices 
         std::cout << std::endl;
         addi2(ma1, ma2, result2); 
           std::cout << "la somme des deux matrices est :"<< std::endl;
        affiche2(result2);
        // afficher les determinats
         std::cout << std::endl;
        std::cout << "le determinant matrice 1 :" <<  detM2(ma1)<< std::endl;
        std::cout << "le determinant matrice 2 :" <<  detM2(ma2)<< std::endl;
       
        // la soustration des deux matrices
         std::cout << std::endl;
        soust2(ma1, ma2, result2) ;
        std::cout << "la diffirence entre matrice 1 et matrice 2 est :"<< std::endl;
        affiche2(result2);
        //  la transposition de la matrice 1
         std::cout << std::endl;
        transpose2(ma1, result2); 
        std::cout << "la transposé de la matrice 1 est:"<< std::endl;
         affiche2(result2);
        //la transposition de la matrice 2  
         std::cout << std::endl;
        transpose2(ma2, result2);
        std::cout << "la transposé de la matrice 2 est:"<< std::endl;
         affiche2(result2);

        //  le produit des deux  matrices
         std::cout << std::endl;
        produit2(ma1, ma2, result2); 
        std::cout << "le produit de la matrice 1 par la matrice 2 est :"<< std::endl;
         affiche2(result2);

        // affichage de la trace 
         std::cout << std::endl;
         std::cout << "le trace de la matrice 1 est  :"<< trac2(ma1)<< std::endl;
          std::cout << "le trace de la matrice 2 est  :"<< trac2(ma2)<< std::endl;
     

    }
    else if (a == 3){
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {   
               std::cout << "composante" << "["<< i+1<<  "," << j+1<< "]"<< std::endl;
                std::cout << "Entrez les termes de la première matrice: ";
                std::cin >> ma3[i][j]; 
                std::cout << "Entrez les termes de la seconde matrice: ";
                std::cin >> ma4[i][j]; 
            }
        }

        // aficher les matrice 
         std::cout << std::endl;
        std::cout << "affichage de la matrice 1 :"<< std::endl;
        affiche3(ma3);
        std::cout << "affichage de la matrice 2 :"<< std::endl;
        affiche3(ma4);
        // somme des deux matrices 
         std::cout << std::endl;
        addi3(ma3, ma4, result3); 
           std::cout << "la somme des deux matrices est :"<< std::endl;
        affiche3(result3);
        // afficher les determinats
         std::cout << std::endl;
        std::cout << "le determinant matrice 1 :" <<  detM3(ma3)<< std::endl;
        std::cout << "le determinant matrice 2 :" <<  detM3(ma4)<< std::endl;
        // la soustration des deux matrices
         std::cout << std::endl;
        soust3(ma3, ma4, result3); 
        std::cout << "la diffirence entre matrice 1 et matrice 2 est :"<< std::endl;
        affiche3(result3);
        //  la transposition de la matrice 1
         std::cout << std::endl;
        transpose3(ma3, result3); 
        std::cout << "la transposé de la matrice 1 est:"<< std::endl;
         affiche3(result3);
        //la transposition de la matrice 2  
         std::cout << std::endl;
        transpose3(ma4, result3);
        std::cout << "la transposé de la matrice 2 est:"<< std::endl;
         affiche3(result3);

        //  le produit des deux  matrices
         std::cout << std::endl;
        produit3(ma3, ma4, result3); 
        std::cout << "le produit de la matrice 1 par la matrice 2 est :"<< std::endl;
         affiche3(result3);

        // affichage de la trace 
         std::cout << std::endl;
         std::cout << "le trace de matrice 1 est  :"<< trac3(ma3)<< std::endl;
          std::cout << "le trace de la matrice 2 est  :"<< trac3(ma4)<< std::endl;
     

    }


    return 0; 
}