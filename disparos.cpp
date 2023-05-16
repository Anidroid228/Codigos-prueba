#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar un número aleatorio entre un rango dado
int generarNumeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    // Semilla para generar números aleatorios
    srand(time(0));

    int objetivo = generarNumeroAleatorio(1, 10);  // Generar un objetivo aleatorio entre 1 y 10
    int intentos = 3;
    int disparo;

    cout << "Bienvenido al juego de disparos!" << endl;

    while (intentos > 0) {
        cout << "Ingrese un número entre 1 y 10 para disparar: ";
        cin >> disparo;

        if (disparo == objetivo) {
            cout << "¡Has acertado! Ganaste el juego." << endl;
            break;
        } else {
            cout << "Has fallado. Intenta de nuevo." << endl;
            intentos--;
        }
    }

    if (intentos == 0) {
        cout << "Se te acabaron los intentos. ¡Perdiste el juego!" << endl;
        cout << "El objetivo era: " << objetivo << endl;
    }

    return 0;
}
