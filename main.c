#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Prototipi delle funzioni
void sommaArray();
void prodottoArray();
void ricercaArray();
void inversioneArray();
void sommaMatrici();
void prodottoMatrici();
void trasposizioneMatrice();
void diagonaleMatrice();
void sortArray();
void sortMatrice();
void fibonacci(int n);
int numeroPrimo(int n);
void inversioneStringa(char str[]);
void eliminaElementoArray();
void eliminaElementoMatrice();
void concatenaStringhe(char str1[], char str2[]);
void confrontaStringhe(char str1[], char str2[]);
void maiuscoloStringa(char str[]);
void minuscoloStringa(char str[]);
void contaVocali(char str[]);
void scambiaVariabili(int *a, int *b);
void modificaValore(int *a);
void sommaVettori(int *arr1, int *arr2, int *somma, int n);
void menu();

int main() {
    menu();
    return 0;
}

// Funzione di menu
void menu() {
    int scelta;
    do {
        printf("\nMenu:\n");
        printf("1. Somma degli elementi di un array\n");
        printf("2. Prodotto degli elementi di un array\n");
        printf("3. Ricerca di un elemento in un array\n");
        printf("4. Inversione di un array\n");
        printf("5. Somma di due matrici\n");
        printf("6. Prodotto di due matrici\n");
        printf("7. Trasposizione di una matrice\n");
        printf("8. Diagonale di una matrice quadrata\n");
        printf("9. Ordinamento di un array\n");
        printf("10. Ordinamento di una matrice\n");
        printf("11. Sequenza di Fibonacci\n");
        printf("12. Controllo di numero primo\n");
        printf("13. Inversione di una stringa\n");
        printf("14. Eliminazione di un elemento da un array\n");
        printf("15. Eliminazione di un elemento da una matrice\n");
        printf("16. Concatenazione di stringhe\n");
        printf("17. Confronto di stringhe\n");
        printf("18. Conversione a maiuscolo di una stringa\n");
        printf("19. Conversione a minuscolo di una stringa\n");
        printf("20. Conta delle vocali in una stringa\n");
        printf("21. Scambia due variabili\n");
        printf("22. Modifica valore tramite puntatore\n");
        printf("23. Somma di due vettori\n");
        printf("0. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1: sommaArray(); break;
            case 2: prodottoArray(); break;
            case 3: ricercaArray(); break;
            case 4: inversioneArray(); break;
            case 5: sommaMatrici(); break;
            case 6: prodottoMatrici(); break;
            case 7: trasposizioneMatrice(); break;
            case 8: diagonaleMatrice(); break;
            case 9: sortArray(); break;
            case 10: sortMatrice(); break;
            case 11: {
                int n;
                printf("Inserisci il numero di termini della sequenza di Fibonacci: ");
                scanf("%d", &n);
                fibonacci(n);
                break;
            }
            case 12: {
                int n;
                printf("Inserisci un numero: ");
                scanf("%d", &n);
                if (numeroPrimo(n)) {
                    printf("%d è un numero primo.\n", n);
                } else {
                    printf("%d non è un numero primo.\n", n);
                }
                break;
            }
            case 13: {
                char str[100];
                printf("Inserisci una stringa: ");
                scanf("%s", str);
                inversioneStringa(str);
                printf("Stringa invertita: %s\n", str);
                break;
            }
            case 14: eliminaElementoArray(); break;
            case 15: eliminaElementoMatrice(); break;
            case 16: {
                char str1[100], str2[100];
                printf("Inserisci la prima stringa: ");
                scanf("%s", str1);
                printf("Inserisci la seconda stringa: ");
                scanf("%s", str2);
                concatenaStringhe(str1, str2);
                break;
            }
            case 17: {
                char str1[100], str2[100];
                printf("Inserisci la prima stringa: ");
                scanf("%s", str1);
                printf("Inserisci la seconda stringa: ");
                scanf("%s", str2);
                confrontaStringhe(str1, str2);
                break;
            }
            case 18: {
                char str[100];
                printf("Inserisci una stringa: ");
                scanf("%s", str);
                maiuscoloStringa(str);
                printf("Stringa in maiuscolo: %s\n", str);
                break;
            }
            case 19: {
                char str[100];
                printf("Inserisci una stringa: ");
                scanf("%s", str);
                minuscoloStringa(str);
                printf("Stringa in minuscolo: %s\n", str);
                break;
            }
            case 20: {
                char str[100];
                printf("Inserisci una stringa: ");
                scanf("%s", str);
                contaVocali(str);
                break;
            }
            case 21: {
                int a, b;
                printf("Inserisci due numeri: ");
                scanf("%d %d", &a, &b);
                scambiaVariabili(&a, &b);
                printf("Dopo lo scambio: a = %d, b = %d\n", a, b);
                break;
            }
            case 22: {
                int a;
                printf("Inserisci un numero: ");
                scanf("%d", &a);
                modificaValore(&a);
                printf("Valore modificato: %d\n", a);
                break;
            }
            case 23: {
                int n;
                printf("Inserisci la dimensione dei vettori: ");
                scanf("%d", &n);
                int arr1[n], arr2[n], somma[n];
                printf("Inserisci gli elementi del primo vettore:\n");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr1[i]);
                }
                printf("Inserisci gli elementi del secondo vettore:\n");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr2[i]);
                }
                sommaVettori(arr1, arr2, somma, n);
                printf("Somma dei vettori: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", somma[i]);
                }
                printf("\n");
                break;
            }
            case 0: printf("Uscita...\n"); break;
            default: printf("Opzione non valida!\n"); break;
        }
    } while (scelta != 0);
}

// Funzione per sommare gli elementi di un array
void sommaArray() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Somma degli elementi: %d\n", sum);
}

// Funzione per moltiplicare gli elementi di un array
void prodottoArray() {
    int arr[] = {1, 2, 3, 4, 5};
    int product = 1;
    for (int i = 0; i < 5; i++) {
        product *= arr[i];
    }
    printf("Prodotto degli elementi: %d\n", product);
}

// Funzione per cercare un elemento in un array
void ricercaArray() {
    int arr[] = {1, 2, 3, 4, 5};
    int target, found = 0;
    printf("Inserisci l'elemento da cercare: ");
    scanf("%d", &target);
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            printf("Elemento %d trovato all'indice %d\n", target, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Elemento %d non trovato\n", target);
    }
}

// Funzione per invertire un array
void inversioneArray() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("Array invertito: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Funzione per sommare due matrici
void sommaMatrici() {
    int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };
    int matrix2[2][2] = {
        {5, 6},
        {7, 8}
    };
    int sum[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Somma delle matrici:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// Funzione per moltiplicare due matrici
void prodottoMatrici() {
    int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };
    int matrix2[2][2] = {
        {5, 6},
        {7, 8}
    };
    int product[2][2] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Prodotto delle matrici:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}

// Funzione per trasporre una matrice
void trasposizioneMatrice() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transpose[3][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Trasposizione della matrice:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

// Funzione per stampare la diagonale di una matrice quadrata
void diagonaleMatrice() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("Diagonale principale:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
    printf("Diagonale secondaria:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matrix[i][2 - i]);
    }
    printf("\n");
}

// Funzione per ordinare un array
void sortArray() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array ordinato: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Funzione per ordinare una matrice
void sortMatrice() {
    int matrix[3][3] = {
        {9, 2, 3},
        {4, 5, 6},
        {7, 8, 1}
    };
    int n = 3 * 3;
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (matrix[j/3][j%3] > matrix[(j+1)/3][(j+1)%3]) {
                temp = matrix[j/3][j%3];
                matrix[j/3][j%3] = matrix[(j+1)/3][(j+1)%3];
                matrix[(j+1)/3][(j+1)%3] = temp;
            }
        }
    }
    printf("Matrice ordinata:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Funzione per calcolare la sequenza di Fibonacci
void fibonacci(int n) {
    int a = 0, b = 1, c;
    if (n <= 0) {
        printf("Numero non valido\n");
        return;
    }
    printf("Sequenza di Fibonacci: %d %d ", a, b);
    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

// Funzione per verificare se un numero è primo
int numeroPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Funzione per invertire una stringa
void inversioneStringa(char str[]) {
    int n = 0;
    while (str[n] != '\0') n++;
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

// Funzione per eliminare un elemento da un array
void eliminaElementoArray() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, index;
    printf("Inserisci l'indice dell'elemento da eliminare (0-%d): ", n-1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Indice non valido\n");
        return;
    }
    for (int i = index; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    printf("Array dopo l'eliminazione: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Funzione per eliminare un elemento da una matrice
void eliminaElementoMatrice() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row, col;
    printf("Inserisci la riga e la colonna dell'elemento da eliminare (0-2): ");
    scanf("%d %d", &row, &col);
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        printf("Indice non valido\n");
        return;
    }
    for (int i = row; i < 2; i++) {
        for (int j = col; j < 2; j++) {
            matrix[i][j] = matrix[i+1][j+1];
        }
    }
    printf("Matrice dopo l'eliminazione:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Funzione per concatenare due stringhe
void concatenaStringhe(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Stringa concatenata: %s\n", str1);
}

// Funzione per confrontare due stringhe
void confrontaStringhe(char str1[], char str2[]) {
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Le stringhe sono uguali\n");
    } else if (result < 0) {
        printf("La prima stringa è minore della seconda\n");
    } else {
        printf("La prima stringa è maggiore della seconda\n");
    }
}

// Funzione per convertire una stringa a maiuscolo
void maiuscoloStringa(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

// Funzione per convertire una stringa a minuscolo
void minuscoloStringa(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

// Funzione per contare le vocali in una stringa
void contaVocali(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    printf("Numero di vocali: %d\n", count);
}

// Funzione per scambiare due variabili tramite puntatori
void scambiaVariabili(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funzione per modificare un valore tramite puntatore
void modificaValore(int *a) {
    *a = *a + 10;
}

// Funzione per sommare due vettori
void sommaVettori(int *arr1, int *arr2, int *somma, int n) {
    for (int i = 0; i < n; i++) {
        somma[i] = arr1[i] + arr2[i];
    }
}
