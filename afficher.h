#include <iostream>

// Fonction pour afficher une matrice de taille 2x2
void affiche2(int matrice[2][2]) {
    std::cout << "Matrice de taille 2x2 :" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << matrice[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Fonction pour afficher une matrice carrée de taille 3x3
void affiche3(int matrice[3][3]) {
    std::cout << "Matrice carrée de taille 3x3 :" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrice[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
