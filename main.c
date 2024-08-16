#include <stdio.h>

int main() {
    int numeroVisitantes;

    // Solicitar ao usuário o número de visitantes
    printf("Digite o número de visitantes do dia: ");
    scanf("%d", &numeroVisitantes);

    // Exibir mensagem de confirmarção
    printf("Número de visitantes registrado: %d\n", numeroVisitantes);

    return 0;
}
