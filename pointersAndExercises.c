#include <stdio.h>
#include <stdlib.h>

typedef struct student {
  char *name;
  int age;
} student;

void stackStudentCreator(student *st) {
  student temp = {"john", 20};
  st = &temp;
}
student *heapStudentCreator() {
  student *st = (student *)malloc(sizeof(student));
  st->age = 30;
  st->name = "george";
  return st;
}

void voidStudentCreator2(student *st) {
  st = (student *)malloc(sizeof(student));
  (st)->age = 30;
  (st)->name = "john";
}

void voidStudentCreator(student **st) {
  *st = (student *)malloc(sizeof(student));
  (*st)->age = 30;
  (*st)->name = "john";
}

void changePtrValue(student *st) {
  st->name = "kostas";
  st->age = 10;
}

int *createArray(int size) {
  int *arr = (int *)malloc(sizeof(int) * size);
  if (arr == NULL) {
    printf("something went wrong with malloc\n");
    exit(1);
  }

  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
  }
  return arr;
}

void createArray2(int **arr, int size) {
  *arr = (int *)malloc(sizeof(int) * size);
  if (*arr == NULL) {
    printf("something went wrong with malloc\n");
    exit(1);
  }
  for (int i = 0; i < size; i++) {
    (*arr)[i] = i + 1;
  }
}
int main() {

  int *myArr = NULL;

  createArray2(&myArr, 4);

  for (int i = 0; i < 4; i++) {
    printf("index %d : value %d \n", i, myArr[i]);
  }

  student *st;

  // voidStudentCreator(&st);

  // printf("name: %s\n", st->name);
  changePtrValue(st);
  printf("name: %s\n", st->name);

  return 0;
}

// exercise 1.
// declare a number (int)
// declare a pointer to that number
// assign the address of number to the pointer
// print the values of both number and the pointer
// change the value of number using the pointer
// print the value again

// exercise 2.
// function  that swaps the values of two numbers using pointers
//
//
// exercise 3.
// create an array inside a function using malloc;
//
//
