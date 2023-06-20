#include <stdio.h>

struct persona
{
    char nombre[20];
    char direccion[50];
    char carrera[25];
};

int main(int argc, char const *argv[])
{
    struct persona alumnos[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese los datos del estudiante %d:\n", i+1);
        
        printf("Nombre: ");
        fflush(stdin);
        gets(alumnos[i].nombre);

        printf("Direccion: ");
        fflush(stdin);
        gets(alumnos[i].direccion);

        printf("Carrera: ");
        fflush(stdin);
        gets(alumnos[i].carrera);
        
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Datos del estudiante %d:\n", i+1);
        
        printf("Nombre: ");
        puts(alumnos[i].nombre);

        printf("Direccion: ");
        puts(alumnos[i].direccion);

        printf("Carrera: ");
        puts(alumnos[i].carrera);
        
        printf("\n");
    }

      for (int i = 0; i < 3; i++)
    {
        printf("Ingrese los datos del estudiante %d:\n", i + 1);

        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);

        printf("Direccion: ");
        scanf("%s", alumnos[i].direccion);

        printf("Carrera: ");
        scanf("%s", alumnos[i].carrera);

        printf("\n");
    }


    return 0;

}
