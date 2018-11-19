#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "heap_sort.c"
#include "bubble_sort.c"
#include "insertion_sort.c"
#include "merge_sort.c"
#include "selection_sort.c"
#include "quick_sort.c"


int main()
{
    printf("Bubble:");
    rb();
    printf("\n");
    printf("Merge:");
    rm();
    printf("\n");
    printf("Insertion:");
    ri();
    printf("\n");
    printf("Heap:");
    rh();
    printf("\n");
    printf("Selection:");
    rs();
    printf("\n");
    printf("Quick (Last Pivot):");
    rq();
    printf("\n");
    printf("Quick (Middle Pivot):");
    rqm();
    printf("\n");


}