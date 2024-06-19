#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

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
int fattoriale(int n);
double interesseComposto(double P, double r, int t);
void insert(int element);
void heapify(int i);
int extractMax();
void printHeap();
void push(int element);
int pop();
int peek();
void printStack();
void enqueue(int element);
int dequeue();
int peekQueue();
void printQueue();
struct Node* newNode(int data);
void inorder(struct Node* root);
void preorder(struct Node* root);
void postorder(struct Node* root);
struct Node* insertNode(struct Node* node, int data);
struct Node* minValueNode(struct Node* node);
struct Node* deleteNode(struct Node* root, int data);
struct Node* search(struct Node* root, int data);
void stampaArray();
void inserisciElementoInArray(int array[10], int dim);
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
        printf("24. Calcolo del fattoriale\n");
        printf("25. Calcolo dell'interesse composto\n");
        printf("26. Inserimento in un heap\n");
        printf("27. Estrazione massima da un heap\n");
        printf("28. Visualizzazione di un heap\n");
        printf("29. Inserimento in uno stack\n");
        printf("30. Estrazione da uno stack\n");
        printf("31. Visualizzazione di uno stack\n");
        printf("32. Inserimento in una queue\n");
        printf("33. Estrazione da una queue\n");
        printf("34. Visualizzazione di una queue\n");
        printf("35. Inserimento in un albero binario\n");
        printf("36. Eliminazione da un albero binario\n");
        printf("37. Ricerca in un albero binario\n");
        printf("38. Visualizzazione in ordine, preordine, postordine di un albero binario\n");
        printf("39. Stampa Array\n\n");
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
            case 24: {
                int n;
                printf("Inserisci un numero: ");
                scanf("%d", &n);
                printf("Fattoriale di %d: %d\n", n, fattoriale(n));
                break;
            }
            case 25: {
                double P, r;
                int t;
                printf("Inserisci il capitale iniziale (P): ");
                scanf("%lf", &P);
                printf("Inserisci il tasso di interesse (r): ");
                scanf("%lf", &r);
                printf("Inserisci il numero di periodi (t): ");
                scanf("%d", &t);
                printf("Interesse composto: %.2lf\n", interesseComposto(P, r, t));
                break;
            }
            case 26: {
                int element;
                printf("Inserisci un elemento da inserire nell'heap: ");
                scanf("%d", &element);
                insert(element);
                break;
            }
            case 27: {
                int max = extractMax();
                if (max != -1)
                    printf("Elemento massimo estratto: %d\n", max);
                break;
            }
            case 28: printHeap(); break;
            case 29: {
                int element;
                printf("Inserisci un elemento da inserire nello stack: ");
                scanf("%d", &element);
                push(element);
                break;
            }
            case 30: {
                int element = pop();
                if (element != -1)
                    printf("Elemento estratto dallo stack: %d\n", element);
                break;
            }
            case 31: printStack(); break;
            case 32: {
                int element;
                printf("Inserisci un elemento da inserire nella queue: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            }
            case 33: {
                int element = dequeue();
                if (element != -1)
                    printf("Elemento estratto dalla queue: %d\n", element);
                break;
            }
            case 34: printQueue(); break;
            case 35: {
                static struct Node* root = NULL;
                int element;
                printf("Inserisci un elemento da inserire nell'albero: ");
                scanf("%d", &element);
                root = insertNode(root, element);
                break;
            }
            case 36: {
                static struct Node* root = NULL;
                int element;
                printf("Inserisci un elemento da eliminare dall'albero: ");
                scanf("%d", &element);
                root = deleteNode(root, element);
                break;
            }
            case 37: {
                static struct Node* root = NULL;
                int element;
                printf("Inserisci un elemento da cercare nell'albero: ");
                scanf("%d", &element);
                struct Node* result = search(root, element);
                if (result != NULL)
                    printf("Elemento %d trovato nell'albero.\n", element);
                else
                    printf("Elemento %d non trovato nell'albero.\n", element);
                break;
            }
            case 38: {
                static struct Node* root = NULL;
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");
                printf("Preorder traversal: ");
                preorder(root);
                printf("\n");
                printf("Postorder traversal: ");
                postorder(root);
                printf("\n");
                break;
            }
            case 39: {
               stampaArray();  
               break;
            }
            case 0: printf("Uscita...\n"); break;
            default: printf("Opzione non valida!\n"); break;
        }
    } while (scelta != 0);
}

void stampaArray(){
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i< 5; i++){
        printf(" %d ", arr[i]);
    }
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

// Funzione ricorsiva per calcolare il fattoriale
int fattoriale(int n) {
    if (n <= 1) 
        return 1;
    else
        return n * fattoriale(n - 1); 
}

// Funzione ricorsiva per calcolare l'interesse composto
double interesseComposto(double P, double r, int t) {
    if (t == 0)
        return P;
    else
        return (1 + r) * interesseComposto(P, r, t - 1);
}

// Heap
int heap[MAX];
int size = 0;

void insert(int element) {
    if (size >= MAX) {
        printf("Heap overflow\n");
        return;
    }
    heap[size++] = element;
    int i = size - 1;
    while (i != 0 && heap[(i - 1) / 2] < heap[i]) {
        int temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;
        i = (i - 1) / 2;
    }
}

void heapify(int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < size && heap[left] > heap[largest])
        largest = left;
    if (right < size && heap[right] > heap[largest])
        largest = right;
    if (largest != i) {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        heapify(largest);
    }
}

int extractMax() {
    if (size <= 0)
        return -1;
    if (size == 1)
        return heap[--size];
    int root = heap[0];
    heap[0] = heap[--size];
    heapify(0);
    return root;
}

void printHeap() {
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

// Stack
int stack[MAX];
int top = -1;

void push(int element) {
    if (top >= MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = element;
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (top < 0) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

void printStack() {
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Queue
int queue[MAX];
int front = 0;
int rear = 0;

void enqueue(int element) {
    if (rear >= MAX) {
        printf("Queue overflow\n");
        return;
    }
    queue[rear++] = element;
}

int dequeue() {
    if (front == rear) {
        printf("Queue underflow\n");
        return -1;
    }
    return queue[front++];
}

int peekQueue() {
    if (front == rear) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[front];
}

void printQueue() {
    for (int i = front; i < rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Albero Binario
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

struct Node* insertNode(struct Node* node, int data) {
    if (node == NULL) return newNode(data);
    if (data < node->data)
        node->left = insertNode(node->left, data);
    else if (data > node->data)
        node->right = insertNode(node->right, data);
    return node;
}

struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

struct Node* search(struct Node* root, int data) {
    if (root == NULL || root->data == data)
        return root;
    if (root->data < data)
        return search(root->right, data);
    return search(root->left, data);
}

void inserisciElementoInArray(int array[10], int dim){
    // Fissiamo dim a 5 all'interno della funzione
    int fixedDim = 5; // Usa una variabile interna per evitare confusione
    if (fixedDim > 10) {
        printf("Dimensione troppo grande\n");
        return; // Esci dalla funzione se fixedDim è maggiore della dimensione dell'array
    }
    
    // Inserisci i numeri nell'array
    for(int i = 0; i < fixedDim; i++){
        printf("inserisci numero nell'array: ");
        scanf("%d", &array[i]);
    }

    // Controlla i numeri nell'array
    for(int i = 0; i < fixedDim; i++){
        if(array[i] >= 4){
            printf("Numero maggiore o uguale a 4 trovato: %d\n", array[i]);
        }
        if(i > 0 && array[i - 1] <= 0){ // Cambia la condizione per evitare accessi fuori dai limiti
            printf("uscito dall'array\n"); // Messaggio informativo
        }
    }
}