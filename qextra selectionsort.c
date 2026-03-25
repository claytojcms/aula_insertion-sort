    #include <stdio.h>
    #include <stdlib.h>

void imprimir_vetor(int V[],int n){
 for(int i = 0;i < n; i++)
    printf(" %d",V[i]);
    printf("\n");

 }

    void insertionSort(int V[], int n) {
int i, j;
int chave;

for (i = 1; i < n; i++) {

chave = V[i];
j = i;

while (j > 0 && chave > V[j - 1]) {
    V[j] = V[j - 1];
    j--;
}
    V[j] = chave;
}
}



    int main()
    {

        int n=6;
    int A[] = {5, 2, 4, 6, 1, 3};
    int B[] = {1, 2, 3, 4, 5, 6};
    int C[] = {6, 5, 4, 3, 2, 1};


        printf("VETOR A: Antes \n");
        imprimir_vetor(A,n);
        printf("DEPOIS:\n");
        insertionSort(A,n);
        imprimir_vetor(A,n);

        printf("\nVETOR B: ANTES \n");
        imprimir_vetor(B,n);
        printf("DEPOIS: \n");
        insertionSort(B,n);
        imprimir_vetor(B,n);

        printf("\nVETOR C: ANTES \n");
        imprimir_vetor(C,n);
        printf("DEPOIS: \n");
        insertionSort(C,n);
        imprimir_vetor(C,n);



        return 0;
    }
