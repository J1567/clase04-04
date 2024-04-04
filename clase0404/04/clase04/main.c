#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    ///strcmp (compara chars, si difrencia las mayusculas,)
/// strlen (da la cantidad de elementos, guardar en una variable)
///strcpy (cambia las palabras pisandolas)
///gets (sive para cargar strings sin &, unicamente con strings)

    /**1) Escriba un programa que pida al usuario ingresar dos cadenas y luego compare si
    son iguales utilizando la función strcmp(). El programa debería imprimir un mensaje
    indicando si las cadenas son iguales o diferentes.*/
    /*
        char cadena1 [20];
        char cadena2 [20];
        printf("ingrese la o las palabras para la cadena 1 (menor a 20 caracteres)\n");
        fflush(stdin);
        gets(cadena1);

        printf("ingrese la o las palabras para la cadena 2 (menor a 20 caracteres)\n");
        fflush(stdin);
        gets(cadena2);
        int respuesta = strcmp(cadena1,cadena2);
        if (respuesta<0)
        {
            printf("la cadena 1 esta antes que la 2");
        }
        else if(respuesta>0)
        {
            printf("la caena 2 esta antes que la 1");
        }
        else
        {
            printf("los strings son iguales");
        }
    */
    /**2) Desarrolla un programa que solicite al usuario ingresar una cadena y luego utilice la
    función strlen() para determinar y mostrar la longitud de la cadena ingresada.*/
    /*
    char cadena3 [20];

    printf("ingrese la palabara \n");
    fflush(stdin);
    gets(cadena3);

    int longitud = strlen(cadena3);

    printf("cadena 3 = %i", longitud);
    */
    /**3) Crea un programa que pida al usuario ingresar una cadena y luego copie esa
    cadena en otra utilizando la función strcpy(). Imprime ambas cadenas para verificar
    que la copia se haya realizado correctamente*/
/*
    char cadena4[20];
    char cadena5[20];

    printf("ingrese la plabara \n");
    fflush(stdin);
    gets(cadena4);

    printf("ingrese la plabara \n");
    fflush(stdin);
    gets(cadena5);
printf("cadenas antes del strcpy\n");
printf("cadena 4 = %s\n",cadena4);
printf("cadena 5 = %s\n",cadena5);

strcpy(cadena4,cadena5);

printf("cadenas despues del strcpy \n");
printf("cadena 4 = %s\n",cadena4);
printf("cadena 5 = %s\n",cadena5);
system("pause");
system("cls");
*/
/**4) Amplía el programa anterior para que después de copiar la cadena ingresada,
solicite al usuario otra cadena y utilice la función strcat() para concatenarla con la
cadena copiada. Luego, imprime la cadena resultante.*/
/*
char cadena6 [20];
 printf("ingrese la plabara \n");
    fflush(stdin);
    gets(cadena6);

    strcat(cadena5,cadena6);
printf("cadena 6 = %s", cadena5);
///no mostrar la cadena que agrego sino la que se cambia
*/
/**5) Crea un programa que solicite al usuario ingresar una cadena y luego utilice un
bucle para recorrer la cadena y contar la cantidad de vocales que contiene. Puedes
utilizar las funciones strcmp() y strlen() para manejar la cadena*/
/*
char cadena7[20];
printf("ingrese la plabara \n");
    fflush(stdin);
    gets(cadena7);
 int longitud2 = strlen(cadena7);
*/



/**6) Escribe un programa que defina dos cadenas de caracteres (strings) y luego utilice
la función strcat() para concatenar la segunda cadena a la primera. Finalmente,
imprime la cadena resultante.*/
char cadena8 [20];
char cadena9 [20];
printf("ingrese la plabara \n");
    fflush(stdin);
    gets(cadena8);
printf("ingrese la plabara \n");
    fflush(stdin);
    gets(cadena9);

    strcat(cadena8,cadena9);

printf("cadena 8 = %s", cadena8);


    return 0;
}
