//
// Created by kathe on 30/03/2023.
//
#include <iostream>
using namespace std;

void suma(){
    int resultado = 0;
    int suma[10] = {1,2, 3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; ++i) {
        resultado = resultado + suma[i];
    }
    cout << resultado << endl;
}

void mayor(){
    int resultado = 0;
    int mayor[6] = {1,12,3,4,8,5};
    for (int i = 0; i < 6; ++i) {
        if (resultado < mayor[i]){
            resultado = mayor[i];
        }
    }
    cout << "El numero mayor encontrado en el array es el " << resultado << endl;
}

void invertir(){
    int cantidad;
    int numeros[8] = {1,3,5,7,9,11,13,15};

    for (int i = 0; i < 8; ++i) {
        cout << numeros[i] << ", ";
    }
    cout << "\n";
    for (int i = 0; i < 4; ++i) {//i = 1
        cantidad = numeros[i]; //cantidad = 3
        numeros[i] = numeros[7-i];// 3 = 13
        numeros[7-i] = cantidad;// 13 = 3
    }
    for (int i = 0; i < 8; ++i) {
        cout << numeros[i] << ", ";
    }
    cout << "\n";
}

void mostrarSuma(){
    int resultado = 0;
    int suma[10] = {2,8,3,7,5,6,14,6,4,10};
    for (int i = 0; i < 10; ++i) {
        resultado = resultado + suma[i];
        if (i < 9){
            cout << suma[i] << " + ";
        }else{
            cout << suma[i] << " = " << resultado << endl;
        }
    }
    cout << "La suma total de los elementos del array es de: " << resultado << endl;
}

void contador(){
    int contadorFresa = 0, contadorSandia = 0, contadorMelon = 0, contadorNaranja = 0, contadorMango = 0;
    string frutas[9] = {"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
    for (int i = 0; i < 9; ++i) {
        if (frutas[i] == "fresa"){
            contadorFresa += 1;
        }
        if (frutas[i] == "sandia"){
            contadorSandia += 1;
        }
        if (frutas[i] == "melon"){
            contadorMelon += 1;
        }
        if (frutas[i] == "naranja"){
            contadorNaranja += 1;
        }
        if (frutas[i] == "mango"){
            contadorMango += 1;
        }
    }
    cout << "Se encontro " << contadorFresa << " coincidencias con la palabra FRESA en el array" << endl;
    cout << "Se encontro " << contadorSandia << " coincidencias con la palabra SANDIA en el array" << endl;
    cout << "Se encontro " << contadorMelon << " coincidencias con la palabra MELON en el array" << endl;
    cout << "Se encontro " << contadorNaranja << " coincidencias con la palabra NARANJA en el array" << endl;
    cout << "Se encontro " << contadorMango << " coincidencias con la palabra MANGO en el array" << endl;
}