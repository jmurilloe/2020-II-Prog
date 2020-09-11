#include <iostream>

double average (const double & k,double y);

int main(void)
{
    double x = 9.8, y = -10.76, z=0;
    std::cout << "main:     " << x << std::endl;
    z = average (x,y);
    std::cout << z << std::endl;
    std::cout << "main:     " << &x << std::endl;
    std::cout << "main:     " << x << std::endl;
    return 0;
}

double average (const double & k,double y )// 4.  si hago const double &k, la funcion no le cambia valor al lugar de memoria donde esta k.
// 5. ni creo nuevas variables
// 6. en la linea 3 y 16, se hace una referencia:
// 1.  el & usa la misma direccion de memoria
// 2. Esto hace que x y k, en este caso, sean sinonimos
// 3. A estos sinonimos se les llama "referencia"
{
    double result = 0;
    result = (k + y)/2;
    std::cout << "main:     " << &k << std::endl;
//    k = 25.768543; si esto se compila, esta linea botara error junto a 16 por que a k no se le puede asignar nada debido a que es read-only
    return result;
}
