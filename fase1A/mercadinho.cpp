#include <iostream>

int main() {
    int n;
    int idosos = 0;
    int ultimo = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int idade;
        std::cin >> idade;
        if (idade >= 60) {
            idosos += 1;
            ultimo = i;
        }
    }

    int segundos = 0;

    if (idosos > 0) {
        segundos = ultimo - (idosos - 1);
    }

    std::cout << segundos;

    return 0;
}