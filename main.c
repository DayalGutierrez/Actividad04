# include <stdio.h>

void capturar_enteros(){
    int enteros[5],suma=0;
    float promedio;
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d\n", enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma += enteros[i];
    }
    printf("Suma: %d\n", suma);
    printf("Promedio: %f\n", suma / 5.0);

}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s", cadena);
    }
    
}
int main(){
    char op;
    char cadena[20];
    int n;

    do{
        fflush(stdin);
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena  veces\n");
        printf("3) Agregar personaje\n");
        printf("0) Salir\n");
        scanf("%c", &op);

        fflush(stdin);

        switch (op)
        {
        case '1':
            capturar_enteros();
            break;
        case '2':
            printf("Escribe una cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena),stdin);
            printf("n: ");
            scanf("%d", &n);
            mostrar(n, cadena);
            break;
        case '3':
            /* code */
            break;
        default:
            break;
        }

    } while (op != '0');
}