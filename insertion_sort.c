
#include <stdio.h> 
#include <math.h> 
  
void insertionSort(int array[], int tamanho) 
{ 
   int i;
   int escolhido;
   int j; 
   for (i = 1; i < tamanho; i++) 
   { 
       escolhido = array[i]; 
       j = i-1; 
  
       while (j >= 0 && array[j] > escolhido) 
       { 
           array[j+1] = array[j]; 
           j = j-1; 
       } 
       array[j+1] = escolhido; 
   } 
} 

void printar_array(int array[],int tamanho){
    for(int i = 0;i<tamanho;i++){
        printf("Posição:%d -> %d \n",i,array[i]);
    }
}

int main(){
    int array[12];
    int n;
    for (int i ;i<12;i++){
        scanf("%d",&n);
        array[i]=n;
    }
    printar_array(array,12);
    insertionSort(array,12);
    printar_array(array,12);
}