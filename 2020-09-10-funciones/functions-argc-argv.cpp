#include <iostream>
#include <cstdlib>
double average (double k, double y);

int main (int argc, char *argv[])
{
    double x = std::atof(argv[1]);
    double y = std::atof(argv[2]); // x,y sera una variable segun lo indique la linea de comandos
                                   // pero argv solo guarda texto. Para convertirla en double, se usa la libreria
                                   // stdlib, y puntualmente atof (stringtodouble)
    double z = 0;
    z = average (x, y);
    std::cout << z << std::endl;
    return 0;
}

double average (double k, double y)
{
    double result = 0;
    result = (k+y)/2;
    return result;
}
