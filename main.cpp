#include <iostream>

int main(int argc, char** argv) {
    unsigned int i; 
    unsigned long long n;

    std::cout << "Entrez votre nombre: " << std::endl;
    std::cin >> n;  

    i = 1;
    do {
        i = i * n;  
        n = n - 1;
    } while (n > 1); 

    std::cout << "LE RESULTAT dU FACTORIEL DE VOTRE NOMBRE EST : " << i << std::endl;  
}
