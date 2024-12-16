#include <iostream>
using namespace std;

int main() {
    int qtd = 1;
    int numTeste = 1;
    while (qtd != 0) {
        int aux;
        cin >> qtd;
        if (qtd == 0)
            break;

        int numIngresso;
        
        for (int i = 1; i <= qtd; i++) {

            cin >> numIngresso;

            if (numIngresso == i) {
                aux = numIngresso;
            }
        }

        cout << "Teste " << numTeste << endl;
        numTeste++;

        cout << aux << endl;
        cout << endl;
    }
}