#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usu�rio para inserir um n�mero inteiro positivo
    cout << "Digite um n�mero inteiro positivo: ";
    cin >> numero;

    // Verifica se o n�mero inserido � positivo
    if (numero <= 0) {
        cout << "O n�mero deve ser um inteiro positivo. Programa encerrado." << endl;
        return 1; // Encerra o programa com um c�digo de erro
    }

    int i = 0; // Inicializa o contador

    // Exibe todos os n�meros pares entre 0 e o n�mero inserido
    cout << "N�meros pares entre 0 e " << numero << ":" << endl;

    do {
        if (i % 2 == 0) { // Verifica se o n�mero � par
            cout << i << " ";
        }
        i++; // Incrementa o contador
    } while (i <= numero); // O loop continua enquanto i for menor ou igual ao n�mero inserido

    cout << endl; // Linha em branco para a formata��o

    return 0;
}

