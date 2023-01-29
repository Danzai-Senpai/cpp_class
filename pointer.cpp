#include <iostream>
using namespace std;

int main() {

    int Var = 3; /*Variavel*/
    int* pVar; /*Valor do Ponteiro Var*/
    pVar = &Var; /*Endereço de Memoria da Variavel Var*/

    cout << Var << endl;
    cout << *pVar << endl;
    cout << pVar << endl;

}