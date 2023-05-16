#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operacion;

    cout << "Calculadora Científica" << endl;
    cout << "----------------------" << endl;

    // Entrada de los números y la operación
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese la operación (+, -, *, /, ^): ";
    cin >> operacion;

    if (operacion != '^') {
        cout << "Ingrese el segundo número: ";
        cin >> num2;
    } else {
        num2 = 0.0;  // Si la operación es "^", el segundo número se establece en 0 inicialmente
    }

    // Realizar la operación correspondiente
    double resultado;
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Error: No se puede dividir entre 0." << endl;
                return 0;
            }
            break;
        case '^':
            resultado = pow(num1, num2);
            break;
        default:
            cout << "Error: Operación no válida." << endl;
            return 0;
    }

    // Imprimir el resultado
    cout << "El resultado es: " << resultado << endl;

    return 0;
}
