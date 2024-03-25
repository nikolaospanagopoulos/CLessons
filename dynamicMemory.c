#include <stdio.h>
#include <stdlib.h>

int *myFunc() {

  int *myNum = (int *)malloc(sizeof(int));

  printf("ptr value in function %d\n", *myNum);

  int *mySecNum = (int *)calloc(1, sizeof(int));

  printf("ptr value in function %d\n", *mySecNum);

  *myNum = 5;

  // 5 int -> 4 * 5 20 byte
  int *firstArr = (int *)malloc(5 * sizeof(int));

  int *secArr = (int *)calloc(5, sizeof(int));

  for (int i = 0; i < 5; i++) {
    firstArr[i] = i + 1;
  }

  for (int i = 0; i < 5; i++) {
    printf("arry position %d: %d\n", i, firstArr[i]);
  }

  for (int i = 0; i < 5; i++) {
    secArr[i] = i + 1;
  }

  for (int i = 0; i < 5; i++) {
    printf("sec arry position %d: %d\n", i, secArr[i]);
  }

  free(firstArr);
  free(secArr);

  return myNum;
}

void myReallocExample() {
  int *arr = NULL;

  arr = (int *)malloc(20);

  for (int i = 0; i < 5; i++) {
    arr[i] = i + 1;
  }

  for (int i = 0; i < 5; i++) {
    printf(" arry position %d: %d\n", i, arr[i]);
  }

  int *tmp = realloc(arr, 24);

  arr = tmp;

  for (int i = 0; i < 6; i++) {
    arr[i] = i + 1;
  }
  for (int i = 0; i < 6; i++) {
    printf(" arry position %d: %d\n", i, arr[i]);
  }

  free(arr);
}

int *exampleToFree() {
  int *myNum = (int *)malloc(4);

  *myNum = 5;

  return myNum;
}

int main() {

  int myArr[] = {1, 2, 3, 4, 5};

  printf("ptr position %p\n", myArr);
  printf("ptr value %d\n", *myArr);

  int *myPtr = myFunc();

  printf("ptr position %p\n", myPtr);
  printf("ptr value %d\n", *myPtr);
  myReallocExample();
  free(myPtr);

  int *myArr2 = NULL;
  int size;

  printf("write size of array \n");

  scanf("%d", &size);

  myArr2 = (int *)malloc(size * sizeof(int));

  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &myArr2[i]);
  }
  for (int i = 0; i < size; i++) {
    printf(" arry position %d: %d\n", i, myArr2[i]);
  }

  free(myArr2);

  int *ptrToFree = exampleToFree();

  free(ptrToFree);
  ptrToFree = NULL;

  return 0;
}

// write a function that calculates the sum of two numbers and returns a ptr to
// the result (result in dynamic memory) write a function that creates an array
// of int and sets it's number to it's index + 1 write a function that creates
// an array of double and sets it's number to it's index + 1 re write a similar
// program with user input and arrays free memory accordingly
