// Codigo para calcular medidas de um tanque de escoamento


#include <iostream>
#include <math.h>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
    // Declara��o das vari�veis
    double Q, D, V;

    // Solicita ao usu�rio os valores
    cout << "Digite a vazao do liquido (em litros por segundo): ";
    cin >> Q;

    cout << "Digite o diametro do recipiente (em cent�metros): ";
    cin >> D;

    cout << "Digite a viscosidade do liquido (em Pascal-segundo): ";
    cin >> V;

    // Processos de conversao de unidades
    Q = Q / 1000.0;  // Converte a vaz�o de litros/segundo para metros c�bicos/segundo
    D = D / 100.0;   // Converte o di�metro de cent�metros para metros

    // C�lculo da �rea da se��o transversal do tubo
    double Area = M_PI * D * D / 4;

    // C�lculo da velocidade do l�quido
    double Velocidade = Q / Area;

    // C�lculo do n�mero de Reynolds
    double Reynolds = Velocidade * D / V;

    // Exibe os resultados
    cout << fixed;  // Configura a sa�da para ter precis�o fixa
    cout.precision(2);  // Define a precis�o para duas casas decimais

    cout << "\nResultados:" << endl;
    cout << "�rea da se��o transversal: " << Area << " metros quadrados" << endl;
    cout << "Velocidade do l�quido: " << Velocidade << " metros por segundo" << endl;
    cout << "N�mero de Reynolds: " << Reynolds << endl;

    return 0;
}
