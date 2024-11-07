#include <stdio.h>
#include <stdlib.h>

// Yalith Torres 30206361 N713
float calcularPromedio(float corte1, float corte2, float corte3)
{
    float promedio = (corte1 * 0.3) + (corte2 * 0.3) + (corte3 * 0.4);
    return promedio;
}

int main()
{
    float notaCorte1, notaCorte2, notaCorte3, promedio;

    printf("Ingrese la nota del primer corte (1 a 20): ");
    scanf("%f", &notaCorte1);

    printf("Ingrese la nota del segundo corte (1 a 20): ");
    scanf("%f", &notaCorte2);

    printf("Ingrese la nota del tercer corte (1 a 20): ");
    scanf("%f", &notaCorte3);

    if ((notaCorte1 >= 1 && notaCorte1 <= 20) &&
        (notaCorte2 >= 1 && notaCorte2 <= 20) &&
        (notaCorte3 >= 1 && notaCorte3 <= 20))
    {

        promedio = calcularPromedio(notaCorte1, notaCorte2, notaCorte3);

        printf("El promedio de las notas es: %.2f\n", promedio);
    }
    else
    {
        printf("Error: Todas las notas deben estar entre 1 y 20.\n");
    }

    printf("Fin del programa\n");
    system("pause");
    return 0;
}
