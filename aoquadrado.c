#include <stdio.h>

main()
{
    int a, b, c, resultado;

    printf("Digite o valor de a ");
    scanf("%d", &a);
    printf("Digite o valor de b ");
    scanf("%d", &b);
    printf("Digite o valor de c ");
    scanf("%d", &c);

    resultado = a*a + b*b + c*c;

    printf("Resultado: %d", resultado);

    return 0;
}
