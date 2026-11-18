#include <iostream>
#include <algorithm>
#include <initializer_list>

int main() {
    int a1, a2, b1, b2, c1, c2, dias;

    std::cin >> a1;
    std::cin >> a2;
    std::cin >> b1;
    std::cin >> b2;
    std::cin >> c1;
    std::cin >> c2;

    int inicio = std::max({a1, b1, c1});
    int final = std::min({a2, b2, c2});

    dias = final - inicio + 1;

    std::cout << ((dias < 0) ? 0 : dias);

    return 0;
}