#include <iostream>
#include "metodos.h"

using namespace std;

int main() {
    int opc;
    do {
        cout << "---------- Elija una opcion ----------" << endl;
        cout << "[1] Suma de elementos \n[2] Encontrar el numero mayor \n[3] Invertir orden de elementos "
                "\n[4] Mostrar la suma de elementos \n[5] Contador de Frutas \n[0] Salir" << endl;
        cin >> opc;
        switch (opc) {
            case 1:
                suma();
                break;
            case 2:
                mayor();
                break;
            case 3:
                invertir();
                break;
            case 4:
                mostrarSuma();
                break;
            case 5:
                contador();
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while (opc != 0);
    return 0;
}
