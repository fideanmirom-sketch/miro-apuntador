#include <iostream>
using namespace std;

int main(){
    int numero = 25
    int *puntero_Boom;
    puntero_Boom =&numero;
    
    cout << "Valor de numero: " << numero << endl;
    cout << "direccion de numero: "<<&numero << endl;
    cout << "contenido del puntero: " << *puntero_Boom << endl;

    return 0;
}