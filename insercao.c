// Created by Angélica on 24/09/2024.
void Insercao( TipoItem *A, int n){
    int i, j;
    TipoItem x;
    for (i = 2; i<=n;i++){
        x = A[i];
        j = i - 1;
        A[0] = x; //sentinela
        while (x.chave < A[j].Chave){
            A[j+1] = A[j]; //movimentação
            j--;
        }
        A[j+1] = x; //insercao
    }
}