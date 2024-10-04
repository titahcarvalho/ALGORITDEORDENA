// Created by Angélica on 19/09/2024.
void Selecao(TipoItem *A, int n){
int i, j, Min;
TipoItem x;
for(i = 1; i<= n-1;i++){
    Min = i;
    for(j=i+1; j<= n; j++){
    Min = j;
  }
  //movimentação
  x = A[Min];
  A[Min] = A[i];
  A[i] = x;


//inserção
void Insercao(TipoItem *A, int n){
    int i, j;
    TipoItem x;
    for(i = 2; i <=n;i++){
        x = A[i];
        j=i-1;
        A[0] = x; //sentinela
        while (x.Chave < A[j].Chave){
            A[j+1] = A[j];//movimentação
            j--;
        }
        A[j+1] = x;
    }
}