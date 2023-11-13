#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

//INTEGRANTES:
//Juliana Rincon Bautista
//Leidy Ximena Penagos Martinez
//Luisa Fernanda Merchan Rojas


char* romanToInt(int number) {
    if (number < 1 || number > 9000) {
        printf("El numero debe estar entre 1 y 9000\n");
        return NULL;
    }

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    char* romanNumber = (char*)malloc(100 * sizeof(char));

    if (romanNumber != NULL) {
        *romanNumber = '\0';

        for (int i = 0; i < 13; i++) {
            while (number >= values[i]) {
                strcat(romanNumber, symbols[i]);
                number -= values[i];
            }
        }
    }

    return romanNumber;
}
void factoresPrimos(int numero) {
    int i;
    int potencia;
    int factores[100];
    int exponentes[100];
    int num_factors = 0;

    for (i = 2; i <= sqrt(numero); i++) {
        potencia = 0;
        while (numero % i == 0) {
            potencia++;
            numero /= i;
        }
        if (potencia > 0) {
            factores[num_factors] = i;
            exponentes[num_factors] = potencia;
            num_factors++;
        }
    }

    if (numero > 2) {
        factores[num_factors] = numero;
        exponentes[num_factors] = 1;
        num_factors++;
    }

    for (i = 0; i < num_factors - 1; i++) {
        for (int j = i + 1; j < num_factors; j++) {
            if (factores[i] < factores[j]) {
                int temp = factores[i];
                factores[i] = factores[j];
                factores[j] = temp;
                temp = exponentes[i];
                exponentes[i] = exponentes[j];
                exponentes[j] = temp;
            }
        }
    }

    for (i = 0; i < num_factors; i++) {
        printf("%d^%d ", factores[i], exponentes[i]);
    }
    printf("\n");
}

int aux_factoresPrimos() {

    int n;
    printf("Ingrese un numero... : ");
    scanf("%d", &n);
    printf("la descomposicion del numero en potencias de sus factores primos %d es: ", n);
    factoresPrimos(n);

    return 0;

}


char* NombrePropio(char *cadena) {
    int length = strlen(cadena);
    int i;

    int capitalize = 1;

    for (i = 0; i < length; i++) {
        if (isspace(cadena[i])) {
            capitalize = 1;
        } else {
            if (capitalize) {
                cadena[i] = toupper(cadena[i]);
                capitalize = 0;
            } else {
                cadena[i] = tolower(cadena[i]);
            }
        }
    }
    return cadena;
}


int Numeros_Egolatras(int n) {
    int numeroDigitos = floor(log10(n) + 1);
    char cadena[numeroDigitos + 1];;

    sprintf(cadena, "%d", n);

    int suma = 0;
    for (int i = 0; i < numeroDigitos; i++) {
        int cont = cadena[i] - '0';

        int elevado = pow(cont, numeroDigitos);
        suma = suma + elevado;
    }
    if (suma == n) {
        return 1;
    } else {
        return 0;
    }
    printf("\n");
}
int sumaDivisores(int num){
    int suma=1;
    for(int i=2; i<=num/2; i++){
        if (num%i==0){
            suma+=i;
        }
    }
    return suma;
}

int Numeros_Amigos(int num1,int num2){
    return (sumaDivisores(num1)==num2 && sumaDivisores(num2)==num1);
}

void Date(char date[10]) {


    if (date[2] == '/' && date[5] == '/' && date[9] !=
                                            '\0' && date[8] !=
                                                    '\0' && date[7] !=
                                                            '\0' && date[6] !=
                                                                    '\0') {
        char mes;
        char dia1 = date[0];
        char dia2 = date[1];
        char mes1 = date[3];
        char mes2 = date[4];
        char año1 = date[6];
        char año2 = date[7];
        char año3 = date[8];
        char año4 = date[9];


        if (dia1 == '0' || dia1 == '1' || dia1 == '2') {

            if (mes1 == '0' && mes2 == '1') {
                printf("%c%c de Enero de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '2') {
                printf("%c%c de Febrero de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '3') {
                printf("%c%c de Marzo de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '4') {
                printf("%c%c de Abril de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '5') {
                printf("%c%c de Mayo de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '6') {
                printf("%c%c de Junio de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '7') {
                printf("%c%c de Julio de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '7') {
                printf("%c%c de Julio de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '7') {
                printf("%c%c de Julio de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '8') {
                printf("%c%c de Agosto de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '0' && mes2 == '9') {
                printf("%c%c de Septiembre de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '1' && mes2 == '0') {
                printf("%c%c de Octubre de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '1' && mes2 == '1') {
                printf("%c%c de Noviembre de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else if (mes1 == '1' && mes2 == '2') {
                printf("%c%c de Diciembre de %c%c%c%c", dia1, dia2, año1, año2, año3, año4);
            } else {
                printf("El mes no es valido");
            }


        } else {
            printf("El dia no es valido");
        }
    } else {
        printf("La fecha  no es correcta por favor ingresela con el formato=01/12/2023");
    }
}

int productoPunto() {

    int vecOne[5], vecTwo[5];
    int aux[5];
    int result = 0;
    int lenOne, lenTwo;

    printf("\nIngrese la longitud del vector 1\n");
    scanf("%d", &lenOne);

    printf("Ingrese la longitud del vector 2\n");
    scanf("%d", &lenTwo);


    if (lenOne == lenTwo) {
        printf("Agregue valores al primer vector \n");
        for (int i = 0; i < lenOne; i++)
            scanf("%d", &vecOne[i]);
        printf("Agregue valores al segundo vector \n");
        for (int i = 0; i < lenTwo; i++)
            scanf("%d", &vecTwo[i]);


    } else {


        printf("Null\n");
        return 0;

    }

    for (int i = 0; i < lenTwo; i++) {
        aux[i] = vecOne[i] * vecTwo[i];
        result += aux[i];
    }


    printf("El producto punto de los vectores registrados es --> %d \n ", result);

    return result;

}

int multiplicacionMatriz() {
    int a[15][15], b[15][15], c[15][15];
    int f1, f2, c1, c2;

    int cont, aux;

    printf("\n Agregue el numero de filas de la matriz 1 \n");
    scanf("%d", &f1);

    printf("Agregue el numero de columnas de la matriz 1 \n");
    scanf("%d", &c1);

    printf("Agregue el numero de filas de la matriz 2 \n ");
    scanf("%d", &f2);

    printf("Agregue el numero de columnas de la matriz 2 \n");
    scanf("%d", &c2);


    if (f1 == c2) {


        for (int i = 0; i < f1; ++i) {
            for (int j = 0; j < c1; ++j) {
                a[i][j] = rand() % 9 + 1;
            }
        }

        for (int i = 0; i < f2; ++i) {
            for (int j = 0; j < c2; ++j) {
                b[i][j] = rand() % 9 + 1;
            }
        }

        for (int i = 0; i < f1; ++i) {
            for (int j = 0; j < c1; ++j) {
                for (cont = 0, aux = 0; cont < c1; ++cont) {
                    aux = aux + a[i][cont] * b[cont][j];
                }
                c[i][j] = aux;
            }
        }

        printf(" ---- Primer matriz -----");
        for (int i = 0; i < f1; ++i) {
            printf("\n");
            for (int j = 0; j < c1; ++j) {
                printf("\t%d", a[i][j]);
            }
        }

        printf("\n ---- Segunda matriz ----");
        for (int i = 0; i < f2; ++i) {
            printf("\n");
            for (int j = 0; j < c2; ++j) {
                printf("\t%d", b[i][j]);
            }
        }

        printf("\n Multiplicacion de matriz ");
        for (int i = 0; i < f1; ++i) {
            printf("\n");
            for (int j = 0; j < c2; ++j) {
                printf("\t%d", c[i][j]);
            }
        }
        printf("\n");
    } else {
        printf("Null\n");
        return 0;

    }

    return aux;
}

void matrizMagica(int num) {
    int a[num][num];
    int i = 1;
    int j = (1 + num) / 2;
    int aux = 2;


    if (num % 2 == 1) {
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= num; j++) {
                a[i][j] = 0;
            }
        }
    } else {
        return;
    }

    a[i][j] = 1;
    while (aux <= (num * num)) {
        i = i - 1;
        j = j + 1;
        if (i < 1 && j > num) {
            i = i + 2;
            j = j - 1;
        } else {
            if (i < 1) {
                i = num;
            }
            if (j > num) {
                j = 1;
            }
        }
        if (a[i][j] == 0) {
            a[i][j] = aux;
        } else {
            i += 2;
            j -= 1;
            a[i][j] = aux;
        }
        aux++;
    }

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}

int menuOption;
char *menu = "\t---MENU DE OPCIONES--- \n\n"
             "1. Numero Romano\n"
             "2. Factores Primos\n"
             "3. Nombre Propio\n"
             "4. Numeros Egolatras \n"
             "5. Numeros Amigos \n"
             "6. Fechas\n"
             "7. Producto Punto\n"
             "8. Multiplicacion de Matrices\n"
             "9. Matriz Magica\n"
             "0. Salir\n\n"
             "Digite una opcion del menu\n";

int main() {
    char texto[100];
    do {

        printf(menu);
        scanf("%i", &menuOption);
        fflush(stdin);
        switch (menuOption) {
            int num;
            char date[0];

            case 0:
                printf("Saliendo...\n");

                break;
            case 1:
                printf("--Numeros Romanos--\n");
                int number;
                printf("Ingrese un numero entre 1 y 9000: ");
                scanf("%d", &number);
                printf("Este es el numero romano: ");
                printf("%s\n", romanToInt(number));
               break;
            case 2:
                printf("--Factores Primos--\n");
                aux_factoresPrimos();
                break;
            case 3:
                printf("--Nombre Propio--\n");
                printf("Ingrese una cadena de texto: ");
                fflush(stdin);
                fgets(texto, sizeof(texto), stdin);
                texto[strcspn(texto, "\n")] = '\0';

                printf("Texto original: %s\n", texto);
                printf("Texto como nombre propio: %s\n", NombrePropio(texto));
                break;
            case 4:
                num = 0;
                printf("-------Numeros Egolatras-----\n");
                printf("Ingrese el numero \n ");
                scanf("%d", &num);
                printf("El numero %d %s", num, Numeros_Egolatras(num) ? "es egolatra" : "No es egolatra\n");


                break;

            case 5:
                printf("-------NUMEROS AMIGOS------\n");
                int num1, num2;
                printf("Ingrese el primer numero: ");
                scanf("%d", &num1);

                printf("Ingrese el segundo numero: ");
                scanf("%d", &num2);

                if (Numeros_Amigos(num1, num2)) {
                    printf("Verdadero, los numeros son amigos.\n");
                } else {
                    printf("Falso, los numeros no son amigos.\n");
                }

                break;

            case 6:

                printf("-------Fechas-----\n");
                printf("Ingrese la fecha de la siguiente forma 02/12/2023 \n ");
                scanf("%s", &date);
                Date(date);
                break;


            case 7:
                printf("--Producto Punto--");
                productoPunto();
                break;
            case 8:
                printf("--Multiplicacion de Matrices--");
                multiplicacionMatriz();
                printf("\n");


                break;
            case 9:
                num = 0;
                printf("---Matriz Magica--");
                printf("Agregue una longitud a la matriz magica (Impar)\n");
                scanf("%d", &num);
                matrizMagica(num);

                break;

            default:
                printf("\n\n Por favor seleccione una opcion valida\n\n\n");


        }
    } while (menuOption != 0);


    return 0;
}