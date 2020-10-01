#include <iostream>
#include <cstdlib>

long factorial_recu (int m);
long factorial_loop (int m);

int main (int argc, char **argv)
{
    int n = std::atoi(argv[1]);
    std::cout << factorial_recu (n) << "\n";
    std::cout << factorial_loop (n) << "\n";
}
long factorial_recu (int m)
{
    // n! = n*(n-1)! -> f(n) = n*f(n-1)
    if (m<=1)
    {
        return 1;
    }
    else
    {
        return m*factorial_recu(m-1);
    }
}
long factorial_loop (int m)
{
    long mult = 1;
    for (long ii =2; ii <= m; ++ii){
        mult=mult*ii;
    }
    return mult;
}

