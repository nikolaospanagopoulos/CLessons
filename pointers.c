#include <stdio.h>
#include <stdlib.h>

int main() {

  int myNum = 5;

  int *ptr = &myNum;

  printf("%d\n", *ptr);

  printf("%p\n", ptr);

  printf("%p\n", &myNum);

  printf("---------------------------------------------------------------------"
         "---------------\n");

  int arr[5] = {1, 6, 8, 9, 5};

  int *arrPtr = arr;
  printf("%p\n", arrPtr);

  printf("%d\n", *arr);

  int *secNum = arrPtr + 1;

  printf("%p\n", secNum);

  printf("%d\n", *secNum);

  int *firstNum = secNum - 1;

  printf("%p\n", firstNum);

  printf("%d\n", *firstNum);

  printf("pointer comparison \n");

  // firstNum
  // secNum

  if (secNum > firstNum) {
    printf("second is after the first \n");
  }

  int exampleNumber = 18;

  int *firstPtr = &exampleNumber;
  int *secPtr = &exampleNumber;

  if (firstPtr == secPtr) {
    printf("both point to same memory location \n");
  }

  printf("traverse array with ptr arithmetic \n");

  int myArr[] = {10, 20, 30, 40, 50};

  int *myArrPtr = myArr;

  printf("size of myArr in bytes %lu\n", sizeof(myArr));

  int size = sizeof(myArr) / sizeof(int);

  printf("size of myArr in elements %d\n", size);

  for (int i = 0; i < size; i++) {
    printf("%p ", (myArrPtr + i));
  }

  printf("\n");

  printf("------------------------const "
         "pointers--------------------------------\n");

  const int value = 10;

  // pointer to const

  // σε αυτην την περιπτωση δεν μπορουμε να αλλαξουμε την αξια στη θεση στη
  // μνημη που δειχνει ο ptr. Αλλά μπορουμε να αλλάξουμε το που δειχνει ο ptr
  const int *exConstPtr = &value;

  //*exConstPtr = 20;

  int example = 50;

  exConstPtr = &example;

  printf("value of const ptr %d\n", *exConstPtr);

  printf("Hello from pointers \n");

  int *dynamicMemNum = (int *)malloc(4);

  *dynamicMemNum = 5;

  // const ptr

  int myValue = 80;

  // σε αυτην την περιπτωση δεν μπορουμε να αλλαξουμε την θεση στην οποια
  // δειχνει ο ptr
  //  Αλλά μπορουμε να αλλάξουμε την αξια
  int *const exPtrConst = &myValue;

  *exPtrConst = 1000;
  // exPtrConst = &example;

  int numberNotToChange = 65;

  // δεν μπορουμε να αλλάξουμε τίποτα απο τα δυo
  const int *const notToChangeAtAllPtr = &numberNotToChange;

  printf("ex ptr const value %d\n", *exPtrConst);

  // free(dynamicMemNum);

  return 0;
}
