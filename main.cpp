#include <iostream>

int main(int argc, char** argv) {
    unsigned int i; 
    unsigned long long n;

    std::cout << "Entrez votre nombre: " << std::endl;
    std::cin >> n;  // Corrected input statement

    i = 1;
    do {
        i = i * n;  // Corrected multiplication operator
        n = n - 1;
    } while (n > 1);  // Corrected condition to continue while n is greater than 1

    std::cout << "Le résultat de n! est: " << i << std::endl;  // Corrected output statement
    return 0;
}
