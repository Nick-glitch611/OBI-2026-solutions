#include <iostream>

int main() {
    int p, o;
    std::cin >> p;
    std::cin >> o;

    int Dp = p / 2;
    int Do = o / 4;

    std::cout << std::min(Dp, Do);

    return 0;
}