// Codigo para calcular medidas de um tanque de escoamento


#include <iostream>
#include <math.h>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
    // Declaração das variáveis
    double Q, D, V;

    // Solicita ao usuário os valores
    cout << "Digite a vazao do liquido (em litros por segundo): ";
    cin >> Q;

    cout << "Digite o diametro do recipiente (em centímetros): ";
    cin >> D;

    cout << "Digite a viscosidade do liquido (em Pascal-segundo): ";
    cin >> V;

    // Processos de conversao de unidades
    Q = Q / 1000.0;  // Converte a vazão de litros/segundo para metros cúbicos/segundo
    D = D / 100.0;   // Converte o diâmetro de centímetros para metros

    // Cálculo da área da seção transversal do tubo
    double Area = M_PI * D * D / 4;

    // Cálculo da velocidade do líquido
    double Velocidade = Q / Area;

    // Cálculo do número de Reynolds
    double Reynolds = Velocidade * D / V;

    // Exibe os resultados
    cout << fixed;  // Configura a saída para ter precisão fixa
    cout.precision(2);  // Define a precisão para duas casas decimais

    cout << "\nResultados:" << endl;
    cout << "Área da seção transversal: " << Area << " metros quadrados" << endl;
    cout << "Velocidade do líquido: " << Velocidade << " metros por segundo" << endl;
    cout << "Número de Reynolds: " << Reynolds << endl;

    return 0;
}
