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

while (j > 0){
    comparacoes++;
    if (chave < V[j - 1]){
    V[j] = V[j - 1];
    j--;
    movimentacoes++;
}
else
    break;
}
    movimentacoes++;
    V[j] = chave;
}
printf("movimentacoes:%d || comparacoes:%d\n",movimentacoes,comparacoes);
}



    int main()
    {

        int n=5;
        int A[]={1,2,3,4,5};
        int B[]={5,4,3,2,1};
        int C[]={5,1,4,2,3};

        printf("VETOR A Antes: \n");
        imprimir_vetor(A,n);
        insertionSort(A,n);
        printf("DEPOIS:\n");
        imprimir_vetor(A,n);

        printf("\nVETOR B ANTES: \n");
        imprimir_vetor(B,n);
        insertionSort(B,n);
        printf("DEPOIS:\n");
        imprimir_vetor(B,n);

        printf("\nVETOR C ANTES: \n");
        imprimir_vetor(C,n);
        insertionSort(C,n);
        printf("DEPOIS:\n");
        imprimir_vetor(C,n);



        return 0;
    }
