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
//fazer demais arquivos