#include <iostream>

using namespace std;

void CorregirNota(float* notaPtr, float puntos){
    *notaPtr = *notaPtr + puntos;
}


int main()
{
    float notaPc1;
    float puntos;
    cout << "Ingresar nota Pc1: ";
    cin >> notaPc1;
    cout << "Ingresar Puntos: ";
    cin >> puntos;

    CorregirNota(&notaPc1, puntos);
    cout << "Resultado = " << notaPc1 << "\n";
    
    return 0;
}