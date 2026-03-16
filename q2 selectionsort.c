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
printf("i=%d, chave=%d | antes:",i,chave);
imprimir_vetor(V,n);


while (j > 0 && chave < V[j - 1]) {
    comparacoes++;
    V[j] = V[j - 1];
    j--;
    movimentacoes++;
}
    comparacoes++;
    V[j] = chave;
    printf("i=%d, chave=%d | depois:",i,chave);
    imprimir_vetor(V,n);
}
printf("movimentacoes:%d\n  comparacoes:%d\n",movimentacoes,comparacoes);
}



    int main()
    {

        int n=6;

        int C[]={5,2,4,6,1,3};


        printf("VETOR C: ANTES \n");
        imprimir_vetor(C,n);
        printf("DEPOIS: \n");
        insertionSort(C,n);
        imprimir_vetor(C,n);



        return 0;
    }
