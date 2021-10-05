#include <stdio.h>

void printArray(int *array, int length){
  int i;
  for (i = 0; i < length; i++){
    printf("%d\n", *(array + i));
  }
}

double averageArray(int *array, int length){
  double average = 0;
  int i;
  for (i = 0; i < length; i++){
    average += *(array + i);
  }
  return average /= length;
}

void copyArray(int *array, int *array2, int length){
  int i = 0;
  for (i = 0; i < length; i++){
    *(array2 + i) = *(array + i);
  }
}

int main(){
  int array[5];
  int array2[5];
  srand(time(NULL));
  int i;
  for (i = 1; i < 10; i++){
    array[i] = rand();
  }

  printArray(array, 5);

  printf("%f\n", averageArray(array, 5));

  copyArray(array, array2, 5);
  printArray(array2, 5);
}
