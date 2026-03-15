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
int comparacoes=0;
int movimentacoes=0;
for (i = 1; i < n; i++) {

chave = V[i];
j = i;

while (j > 0 && chave < V[j - 1]) {
    comparacoes++;
    V[j] = V[j - 1];
    j--;
    movimentacoes++;
}
    comparacoes++;
    V[j] = chave;
}
printf("movimentacoes:%d\n  comparacoes:%d\n",movimentacoes,comparacoes);
}



    int main()
    {

        int n=5;
        int A[]={1,2,3,4,5};
        int B[]={5,4,3,2,1};
        int C[]={6,1,9,7,3};

        printf("VETOR A: Antes \n");
        imprimir_vetor(A,n);
        printf("DEPOIS:\n");
        insertionSort(A,n);
        imprimir_vetor(A,n);

        printf("VETOR B: ANTES \n");
        imprimir_vetor(B,n);
        printf("DEPOIS: \n");
        insertionSort(B,n);
        imprimir_vetor(B,n);

        printf("VETOR C: ANTES \n");
        imprimir_vetor(C,n);
        printf("DEPOIS: \n");
        insertionSort(C,n);
        imprimir_vetor(C,n);



        return 0;
    }
