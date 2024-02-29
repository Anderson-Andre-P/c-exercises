/*
╔════════════════════════════════════════╗
║ Nome: Anderson André Pereira Eleutério ║
╚════════════════════════════════════════╝
╔═════╦══════════════════╗
║  n  ║ posições do heap ║
║═════╬═════════════════ ╣
║ *n  ║      tail        ║
║═════╬═════════════════ ╣
║  a  ║      vetor       ║
║═════╬═════════════════ ╣
║  i  ║      indice      ║
╚═════╩══════════════════╝
*/

#include <stdio.h>

#define MAX_SIZE 7

// retorna o índice do nó pai
int parent(int i) {
    return (i - 1) / 2;
}

// devolve o índice do filho esquerdo
int left_child(int i) {
    return 2*i + 1;
}

// devolve o índice do filho da direita
int right_child(int i) {
    return 2*i + 2;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// insira o item na posição apropriada
void insert(int a[], int data, int *n) {
    if (*n >= MAX_SIZE) {
        printf("%s\n", "O Heap está cheio. Não inseriu todos valores.");
        return;
    }
    // primeiro insira o valor na última posição da matriz
    // e mova-o para cima
    a[*n] = data;
    *n = *n + 1;

    // mova até que a propriedade heap satisfaça
    int i = *n - 1;
    while (i != 0 && a[parent(i)] < a[i]) {
        swap(&a[parent(i)], &a[i]);
        i = parent(i);
    }
}

// move o item na posição i da matriz a
// em sua posição apropriada
void max_heapify(int a[], int i, int n){
    // encontrar nó filho esquerdo
    int left = left_child(i);

    // encontrar o nó filho direito
    int right = right_child(i);

    // encontre o maior entre 3 nós
    int largest = i;

    // verifique se o nó left é maior do que o nó atual
    if (left <= n && a[left] > a[largest]) {
        largest = left;
    }

    // verifique se o nó right é maior do que o nó atual
    if (right <= n && a[right] > a[largest]) {
        largest = right;
    }

    // troque o maior nó com o nó atual
    // e repita este processo até que o nó atual seja maior que
    // o nó direito e o nó esquerdo
    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        max_heapify(a, largest, n);
    }

}
/*
// converte um array em um heap
void build_max_heap(int a[], int n) {
    int i;
    for (i = n/2; i >= 0; i--) {
        max_heapify(a, i, n);
    }
}
*/
// retorna o item máximo do heap
int get_max(int a[], int *n) {
	printf("Valor na raiz: %d\n", a[0]);
    return a[0];
}

// retorna o último item do heap
int get_min(int a[], int *n) {
	printf("Último valor do heap: %d\n", a[*n - 1]);
    return a[0];
}


// apaga o item máximo e retorna
int extract_max(int a[], int *n) {
    int max_item = a[0];

    // Mostrando qual é o item maior
    //printf("Valor na raiz: %d\n\n", max_item = a[0]);

    // substitua o primeiro item pelo último item
    a[0] = a[*n - 1];
    *n = *n - 1;

    // manter a propriedade heap, heapificando o
    // primeiro item
    max_heapify(a, 0, *n);
    return max_item;
}

// imprime o heap
void print_heap(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Posicao %d: %d\n", i ,a[i]);
    }
    printf("\n");
}


int main() {
    int n = 0;
    int a[MAX_SIZE];
    /*
    //a[0] = 0;
    //a[1] = 66; a[2] = 10; a[3] = 103;
    //build_max_heap(a, n);

    //2, 6, 68, 90, 87, 15, 18.
    * */
    insert(a, 2, &n);
    insert(a, 6, &n);
    insert(a, 68, &n);
    insert(a, 90, &n);
    insert(a, 87, &n);
    insert(a, 15, &n);
    insert(a, 18, &n);

    print_heap(a, n);
    get_max(a, &n);
    get_min(a, &n);
    extract_max(a , &n);
    print_heap(a, n);
    get_max(a, &n);

    return 0;
}
