#include <stdio.h>

int main() {
    int a[6] = {1, 2, 0, 0, 3, 2};
    int opcion, i, partido, nuevo;

    do {
        printf("\n--- MENU ---\n");
        printf("1) Ver todos los resultados\n");
        printf("2) Ver un resultado\n");
        printf("3) Modificar un resultado\n");
        printf("4) Promedio\n");
        printf("0) Salir\n");
        printf("Elige opcion: ");
        scanf("%d", &opcion);

        if(opcion == 1) {
            for(i = 0; i < 6; i++) {
                printf("Partido %d: %d\n", i+1, a[i]);
            }
        }
        else if(opcion == 2) {
            printf("Numero de partido (1-6): ");
            scanf("%d", &partido);
            printf("Resultado: %d\n", a[partido-1]);
        }
        else if(opcion == 3) {
            printf("Numero de partido (1-6): ");
            scanf("%d", &partido);
            printf("Nuevo resultado: ");
            scanf("%d", &nuevo);
            a[partido-1] = nuevo;
        }
        else if(opcion == 4) {
            int suma = 0;
            for(i = 0; i < 6; i++) suma += a[i];
            printf("Promedio: %.2f\n", (float)suma/6);
        }
    } while(opcion != 0);

    return 0;
}
