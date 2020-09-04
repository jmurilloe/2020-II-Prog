#include <iostream>

int main (void)
{
    int suma =0; //la suma inicia en 0
    int n= 0; //el contador es n que inicia tambien en 0
    while (n<=100) //mientras n sea menor o igual a 100
    {
        if (n%2==1) //dentro de los numeros <100, si n es impar
                    // si n tiene modulo 2 1, es un numero impar
                    //si fuera modulo 2 0, seria par
        {
            suma += n; //dentro de los numeros <100, si n es impar
                       //la variable suma = suma + n
        
        }
        n++; //Ahora, aumentele a n 1. Es decir n+1
    }; //se repite el proceso desde el numero 0 hasta el numero 101,
       //para el cual, el statement n<=100 sera falso
    
    std::cout << suma << "\n"; //cuando while sea falso.
                               //Muestre el valor de la suma
    return 0;

}    
