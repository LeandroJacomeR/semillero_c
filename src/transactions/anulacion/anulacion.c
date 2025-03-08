#include "anulacion.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void actualizarAnulacion() {
    short ref;
    char pan[5], cvv[5];
    printf("Ingrese el numero de referencia: \n");
    scanf("%hd", &ref);

    printf("Ingrese los ultimos 4 digitos del PAN de la tarjeta:\n");
    scanf("%s", &pan);
    if (strlen(pan) != 4 && esNumero(pan)) return;

    printf("Ingrese el cvv de la tarjeta (Min 3 - Max 4 caracteres): \n");
    scanf("%s", &cvv);
    fflush(stdin);
    if (strlen(cvv) < 3 || strlen(cvv) > 4 && esNumero(cvv)) return;

    anulacion(ref, pan, cvv);

    printf(" Presione una tecla para continuar \n");
    getch();
    system("cls");
}
