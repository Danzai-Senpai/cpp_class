#include <iostream>
using namespace std;

int Soma(int a, int b);
float Multiplicacao(int a, int b);

int main() {

    cout << Soma(5, 7) << endl;
    cout << Multiplicacao(3.4, 7.8) << endl;

}

int Soma(int a, int b) {

    int Resultado;
    Resultado = a + b;
    return Resultado;

}

float Multiplicacao(int a, int b) {

    float Resultado;
    Resultado = a * b;
    return Resultado;

}