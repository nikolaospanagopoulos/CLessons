#include <stdio.h>
#include <stdlib.h>

void changeNum(int *ptr);
void changePtrArr(int *arrToChangePtr, int size);
void example();
void printArr(int *arr, int arraySize);
void functionToChangeStackArray(int arr[], int arraySize);
void getUserInputArrWithArgs(int *arr, int size);
void getUserInputArr();
int *myArray();
int *twoNumbers(int num1, int num2);
void doubleArray();
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

  /*
  int *myArr2 = NULL;
  int size;

  printf("write size of array \n");

  scanf("%d", &size);

  myArr2 = (int *)malloc(size * sizeof(int));
  //myArr2 = (int*)calloc(size,sizeof(int))

  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &myArr2[i]);
  }
  for (int i = 0; i < size; i++) {
    printf(" arry position %d: %d\n", i, myArr2[i]);
  }

  free(myArr2);
  */

  int *ptrToFree = exampleToFree();

  free(ptrToFree);
  ptrToFree = NULL;

  int *pointerResult = twoNumbers(5, 3);

  printf("result is %d\n", *pointerResult);

  free(pointerResult);

  int *myCreatedArr = myArray();

  for (int i = 0; i < 10; i++) {
    printf("array index %d: %d\n", i, myCreatedArr[i]);
  }

  free(myCreatedArr);

  doubleArray();

  // getUserInputArr();

  // int size;
  // int *userInputArr2 = NULL;

  // printf("write size of array \n");

  // scanf("%d", &size);

  // getUserInputArrWithArgs(userInputArr2, size);

  int arrToChangeElements[5] = {4, 7, 8, 9, 4};

  functionToChangeStackArray(arrToChangeElements, 5);

  printArr(arrToChangeElements, 5);

  int *ptrArrToChange = (int *)malloc(5 * sizeof(int));

  changePtrArr(ptrArrToChange, 5);

  printArr(ptrArrToChange, 5);

  free(ptrArrToChange);

  int num = 5;

  changeNum(&num);

  printf("changed num: %d\n", num);

  int secNum = 40;
  int *numToChangePtr = &secNum;

  changeNum(numToChangePtr);

  printf("changed num: %d\n", *numToChangePtr);

  return 0;
}

// write a function that calculates the sum of two numbers and returns a ptr to
// the result (result in dynamic memory) write a function that creates an array
// of int and sets it's number to it's index + 1 write a function that creates
// an array of double and sets it's number to it's index + 1 re write a similar
// program with user input and arrays free memory accordingly
//
//
//// write a function that calculates the sum of two numbers and returns a ptr
/// to
// the result (result in dynamic memory)

int *twoNumbers(int num1, int num2) {

  int *result = (int *)malloc(sizeof(int));

  *result = num1 + num2;

  return result;
}

// write a function that creates an array
//  of int and sets it's number to it's index + 1

int *myArray() {

  int *array = (int *)calloc(10, sizeof(int));

  for (int i = 0; i < 10; i++) {
    array[i] = i + 1;
  }

  return array;
}

int *myArrWrong() {
  int arr[10] = {};
  for (int i = 0; i < 10; i++) {
    arr[i] = i + 1;
  }
  // return arr;
  return NULL;
}

// write a function that creates
//  an array of double and sets it's number to it's index + 1

void doubleArray() {

  int arraySize = 5;
  double *myArrOfDoubles = (double *)calloc(arraySize, sizeof(double));

  for (int i = 0; i < arraySize; i++) {
    myArrOfDoubles[i] = (double)(i + 1);
  }

  for (int i = 0; i < arraySize; i++) {
    printf("array index %d: %f\n", i, myArrOfDoubles[i]);
  }

  free(myArrOfDoubles);
}

void getUserInputArr() {

  int *userInputArr = NULL;
  int size;

  printf("write size of array \n");

  scanf("%d", &size);

  userInputArr = (int *)malloc(size * sizeof(int));
  // userInputArr = (int*)calloc(size,sizeof(int));

  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &userInputArr[i]);
  }
  for (int i = 0; i < size; i++) {
    printf(" arry position %d: %d\n", i, userInputArr[i]);
  }

  free(userInputArr);
}

void getUserInputArrWithArgs(int *arr, int size) {
  arr = (int *)malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < size; i++) {
    printf(" arry position %d: %d\n", i, arr[i]);
  }

  free(arr);
}

void functionToChangeStackArray(int arr[], int arraySize) {

  for (int i = 0; i < arraySize; i++) {
    arr[i]++;
  }
}

void example() { int size = 10; }

void printArr(int *arr, int arraySize) {

  for (int i = 0; i < arraySize; i++) {
    printf(" arry position %d: %d\n", i, arr[i]);
  }
}

void changePtrArr(int *arrToChangePtr, int size) {
  for (int i = 0; i < size; i++) {
    arrToChangePtr[i] = i;
  }
}

void changeNum(int *ptr) { *ptr = 50; }
