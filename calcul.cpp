#include <iostream>

const double pi = 3.14;

// Fonction pour calculer la puissance
double puissance(double x, int n) {
    double p = 1;
    for (int i = 1; i <= n; i++) {
        p *= x;
    }
    return p;
}

// Fonction pour calculer la factorielle
int factoriel(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Fonction pour approximer le sinus via série de Taylor
double sin_inter(double x) {
    double sin = 0;  
    for (int i = 0; i <= 10; i++) {
        sin += puissance(-1, i) * (puissance(x, 2 * i + 1)) / factoriel(2 * i + 1);
    }
    return sin;
}

// Fonction sinus qui gère les angles > pi
double sinus(double x) {
    if (x < pi) {
        return sin_inter(x);
    } else {
        return -1 * sin_inter(x - pi);  // Gestion pour les angles > pi
    }
}

// Fonction pour approximer le cosinus via série de Taylor
double cos_inter(double x) {
    double cos = 0;
    for (int i = 0; i <= 10; i++) {
        cos += puissance(-1, i) * (puissance(x, 2 * i)) / factoriel(2 * i);
    }
    return cos;
}

// Fonction cosinus qui gère les angles > pi
double cosinus(double x) {
    if (x < pi) {
        return cos_inter(x);
    } else {
        return cos_inter(x - pi);  // Gestion pour les angles > pi
    }
}

// Fonction pour calculer le modulo 2*pi 
double modulo(double x) {
    while (x >= 2 * pi) {
        x -= 2 * pi;
    }
    while (x < 0) {
        x += 2 * pi;
    }
    return x;
}

// Fonction principale pour calculer le cosinus avec gestion de l'intervalle
double cosinus_final(double x) {
    double a = 0;
   if(x==pi/2 || x==3*pi/2){
   	return 0;
   }else if (x == 0 || x == 2 * pi) {
        return 1;
    }
    else if (x == pi) {
        return -1;
    } else if (x < 0 && -x < 2 * pi) {
        return cosinus(-x);
    } else if (x < 0 && -x > 2 * pi) {
        a = modulo(-x);
        return cosinus(a);
    } else if (x > 0 && x < 2 * pi) {
        return cosinus(x);
    } else if (x > 0 && x > 2 * pi) {
        a = modulo(x);
        return cosinus(a);
    }
    return 0; 
}

// Fonction principale pour calculer le sinus avec gestion de l'intervalle
double sinus_final(double x) {
    double a = 0;
    if (x == 0 || x == pi || x == 2 * pi) {
        return 0;
    } else if (x < 0 && -x < 2 * pi) {
        return -1 * sinus(-x);
    } else if (x < 0 && -x > 2 * pi) {
        a = modulo(-x);
        return sinus(a);
    } else if (x > 0 && x < 2 * pi) {
        return sinus(x);
    } else if (x > 0 && x > 2 * pi) {
        a = modulo(x);
        return sinus(a);
    }
    return 0; 
}

// Fonction pour calculer la tangente
double tangente_final(double x) {
    double sin = sinus_final(x);
    double cos = cosinus_final(x);

    if (cos == 0) {
        std::cout << "La tangente n'existe pas pour cet angle (division par zéro)" << std::endl;
    }else if(cos !=0){
    return sin / cos;
}
}
int main(int argc, char *argv[]) {
    double x;
    double si=0, co=0, tan=0;

    std::cout << "Entrez votre angle en radians : " << std::endl;
    std::cin >> x;

    si = sinus_final(x);
    co = cosinus_final(x);
    tan = tangente_final(x);

    std::cout << "Le sinus de votre angle est : " << si << std::endl;
    std::cout << "Le cosinus de votre angle est : " << co << std::endl;
    std::cout << "La tangente de votre angle est : " << tan << std::endl;

    return 0;
}
	
