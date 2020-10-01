#include <iostream>

int main (int argc, char **argv)
{
    auto flambda = [](auto a, auto b) { return a<b; };
    // [lo que captura] (lo que recibe) {lo que hace}
    bool flag = flambda (2, 3.89);
    std::cout << flag << "\n";
    std::cout << flambda (3.89,2) << "\n";
    return 0;
}
