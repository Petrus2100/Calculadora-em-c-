//Executa todas as operções de calculadora cientifica

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void exibirMenu() {
    cout << "\nSelecione uma operacao:" << endl;
    cout << "1. Soma" << endl;
    cout << "2. Subtracao" << endl;
    cout << "3. Multiplicacao" << endl;
    cout << "4. Divisao" << endl;
    cout << "5. Potencia" << endl;
    cout << "6. Raiz Quadrada" << endl;
    cout << "7. Elevar ao Quadrado" << endl;
    cout << "8. Elevar ao cubo" << endl;
    cout << "9. Seno" << endl;
    cout << "10. Cosseno" << endl;
    cout << "11. Tangente" << endl;
    cout << "12. Lig/Desligar Calculadora" << endl;
    cout << "13. Sair" << endl;
}

int main() {
    int opcao;
    double num1, num2, resultado;
    bool calculadoraLigada = true;

    cout << "Ola, eu sou sua Calculadora Inteligente digital!" << endl;
    cout << "------------------------------------" << endl;

    do {
        if (!calculadoraLigada) {
            cout << "\nCalculadora desligada. Para ligar, selecione a opcao 12." << endl;
            opcao = 12;
        } else {
            exibirMenu();
            cout << "Digite a opcao: ";
            cin >> opcao;

            while (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Entrada invalida. Digite um numero: ";
                cin >> opcao;
            }

            if (opcao >= 1 && opcao <= 4) {
                cout << "Digite o primeiro numero: ";
                cin >> num1;
                cout << "Digite o segundo numero: ";
                cin >> num2;

                while (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Entrada invalida. Digite os numeros novamente." << endl;
                    cout << "Digite o primeiro numero: ";
                    cin >> num1;
                    cout << "Digite o segundo numero: ";
                    cin >> num2;
                }
            }
        }

        switch (opcao) {
            case 1:
                if (calculadoraLigada) {
                    resultado = num1 + num2;
                    cout << "A soma e: " << resultado << endl;
                }
                break;
            case 2:
                if (calculadoraLigada) {
                    resultado = num1 - num2;
                    cout << "A subtracao e: " << resultado << endl;
                }
                break;
            case 3:
                if (calculadoraLigada) {
                    resultado = num1 * num2;
                    cout << "A multiplicacao e: " << resultado << endl;
                }
                break;
            case 4:
                if (calculadoraLigada) {
                    if (num2 != 0) {
                        resultado = num1 / num2;
                        cout << "A divisao e: " << resultado << endl;
                    } else {
                        cout << "Erro: Divisao por zero nao e permitida." << endl;
                    }
                }
                break;
            case 5:
                if (calculadoraLigada) {
                    cout << "Digite a base: ";
                    cin >> num1;
                    cout << "Digite o expoente: ";
                    cin >> num2;
                    resultado = pow(num1, num2);
                    cout << "A potencia e: " << resultado << endl;
                }
                break;
            case 6:
                if (calculadoraLigada) {
                    cout << "Digite o numero: ";
                    cin >> num1;
                    if (num1 >= 0) {
                        resultado = sqrt(num1);
                        cout << "A raiz quadrada e: " << resultado << endl;
                    } else {
                        cout << "Erro: Raiz quadrada de numero negativo nao e permitida." << endl;
                    }
                }
                break;
            case 7:
                if (calculadoraLigada) {
                    cout << "Digite o numero: ";
                    cin >> num1;
                    resultado = pow(num1, 2);
                    cout << num1 << " elevado ao quadrado e: " << resultado << endl;
                }
                break;
            case 8:
                if (calculadoraLigada) {
                    cout << "Digite o numero: ";
                    cin >> num1;
                    resultado = pow(num1, 3);
                    cout << num1 << " elevado ao cubo e: " << resultado << endl;
                }
                break;
            case 9:
                if (calculadoraLigada) {
                    cout << "Digite o angulo em graus: ";
                    cin >> num1;
                    resultado = sin(num1 * M_PI / 180);
                    cout << "O seno de " << num1 << " e: " << resultado << endl;
                }
                break;
            case 10:
                if (calculadoraLigada) {
                    cout << "Digite o angulo em graus: ";
                    cin >> num1;
                    resultado = cos(num1 * M_PI / 180);
                    cout << "O cosseno de " << num1 << " e: " << resultado << endl;
                }
                break;
            case 11:
                if (calculadoraLigada) {
                    cout << "Digite o angulo em graus: ";
                    cin >> num1;
                    resultado = tan(num1 * M_PI / 180);
                    cout << "A tangente de " << num1 << " e: " << resultado << endl;
                }
                break;
            case 12:
                calculadoraLigada = !calculadoraLigada;
                if (calculadoraLigada) {
                    cout << "Calculadora ligada." << endl;
                } else {
                    cout << "Calculadora desligada." << endl;
                }
                break;
            case 13:
                cout << "Saindo da calculadora. Ate logo!" << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 13);

    return 0;
}


