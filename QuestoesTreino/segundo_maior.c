#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Achar segundo número maior
void secondLargest(int array[], int tam){
    int first = 0, second = 0;

     for(int i = 0; i < tam ;i++)
         if(array[i] > first)
             first = array[i];


    for(int i = 0; i < tam ;i++)
         if(array[i] > second && array[i] < first)
             second = array[i];


    printf("\n%d", second);
}

int main() {
    int array[10];
    srand(time(NULL));

    for(int i = 0; i < 10 ;i++){
        array[i] = rand() % 10;
        printf("%d ", array[i]);
    }

    secondLargest(array, 10);

    return 0;
}
