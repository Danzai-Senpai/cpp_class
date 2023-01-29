#include <iostream>
using namespace std;

int main() {

    /* Em variveis sua alocação na memoria permanece enquanto a função durar e ao final da função esta é destruida. */

    /* Já com ponteiros isto funciona de forma diferente onde devemos remove-lo manualmente da nossa memoria. */

    int *prt = new int;
    *prt = 7;

    cout << *prt << endl;
    delete prt;
    cout << *prt << endl;

}