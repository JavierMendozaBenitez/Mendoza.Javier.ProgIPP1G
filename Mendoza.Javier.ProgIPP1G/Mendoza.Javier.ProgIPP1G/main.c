#include <stdio.h>
#include <stdlib.h>
#define TAM_P 5
typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
    int isEmpty;
} ePais;

void actualizarRecuperados(ePais pais[], int tam);
int inicializarPais(ePais pais[], int tam);
int buscarLibre(ePais pais[], int tam);

int main()
{
    ePais pais[TAM_P];

    actualizarRecuperados(pais, TAM_P);

    return 0;
}

int inicializarPais(ePais pais[], int tam)
{
    int error = 1;
    if(pais != NULL && tam > 0)
    {
        for(int i = 0; i < tam; i++)
        {
            pais[i].isEmpty = 1;
        }
        error = 0;
    }
    return error;
}

int buscarLibre(ePais pais[], int tam)
{
    int indice = -1;

    for(int i = 0; i < tam; i++)
    {
        if(pais[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void actualizarRecuperados(ePais pais[], int tam)
{

    int lugarVacio;
    ePais nuevoPais;

    lugarVacio = buscarLibre(pais, tam);

    if(lugarVacio == -1)
    {
        printf("ESTA LLENO, NO HAY LUGARES.\n\n");
    }
    else
    {
        if(pais != NULL)
        {
            printf("Ingrese el pais: ");
            fflush(stdin);
            scanf("%s", &nuevoPais.nombre);

            printf("Ingrese los recuperados: ");
            fflush(stdin);
            scanf("%d", &nuevoPais.recuperados);

            nuevoPais.isEmpty = 0;


            pais[lugarVacio] = nuevoPais;
        }
    }
}
