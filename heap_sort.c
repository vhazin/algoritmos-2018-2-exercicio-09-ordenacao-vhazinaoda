#include <stdio.h>
#include <math.h>
void heapsort(int array[], int n)
{
    int i = n / 2;
    int pai;
    int filho;
    int t;
    while (1)
    {
        if (i > 0)
        {
            i--;
            t = array[i];
        }
        else
        {
            n--;
            if (n == 0)
                return;
            t = array[n];
            array[n] = array[0];
        }
        pai = i;
        filho = i * 2 + 1;
        while (filho < n)
        {
            if ((filho + 1 < n) && (array[filho + 1] > array[filho]))
                filho++;
            if (array[filho] > t)
            {
                array[pai] = array[filho];
                pai = filho;
                filho = pai * 2 + 1;
            }
            else
            {
                break;
            }
        }
        array[pai] = t;
    }
}
void printar_array(int array[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Posição:%d -> %d \n", i, array[i]);
    }
}

int main()
{
    int array[10];
    int n;
    for (int i=0 ;i<10;i++){
        scanf("%d",&n);
        array[i]=n;
    }
    printar_array(array,10);
    heapsort(array,10);
    printar_array(array,10);
}