#include <stdio.h>

struct StructName {
  int num1;
  int num2;
};

typedef struct Car {
  int speed;
  int topSpeed;
  char *brand;
  double price;
} Car;

void explainCar(Car carToExplain) {
  printf("my car's speed is %d , it's top speed is %d, it's brand is %s, it's "
         "price is %f \n",
         carToExplain.speed, carToExplain.topSpeed, carToExplain.brand,
         carToExplain.price);
}

void startCar(Car toStart) { printf("my %s starts\n", toStart.brand); }

typedef unsigned long million;

typedef struct Point {
  int x;
  int y;
} Point;

typedef struct UnnamedPoint {
  int x;
  int y;
} UnnamedPoint;

struct Employee {
  int id;
  float salary;
  struct {
    char *firstName;
    char *lastName;
  } name;
};

// function
// first we declare type (void, int, char etc) that the function will return
// second we declare the function name ->px explainCar
// third in the parenthesis we put the types of of arguments we will use
// four we declare the function body

int exampleVoidFunctionName(int exampleNum1, int exampleNum2) {

  // krataw 4 byte gia to prwto argument me onoma exampleNum1
  // krataw 4 byte gia to deutero argument me onoma exampleNum2

  int result = exampleNum1 + exampleNum2;
  return result;
}

int *functionToReturnPointer() {
  int myNum = 5;

  return &myNum;
}

void functionToTryToChangeNum(int numToChange) { numToChange = 5; }

void functionToChangeNum(int *pointerToNumToChange) {
  *pointerToNumToChange = 5;
}

int main() {

  int result = exampleVoidFunctionName(5, 6);

  int myNum1 = 7;
  int myNum2 = 8;

  int result2 = exampleVoidFunctionName(myNum1, myNum2);

  int myNumberToChange = 8;

  functionToTryToChangeNum(myNumberToChange);

  functionToChangeNum(&myNumberToChange);

  printf("myNumberToChange value: %d\n", myNumberToChange);

  printf("result is %d\n", result);

  struct Employee myEmployee = {10, 1000, {"nikos", "no surname"}};

  million myMillion = 1000000;

  // i have a variable mycar that is type of struct car
  struct Car myCar = {45, 180, "toyota", 10.000};
  // i have a variable mycar2 that is type of Car
  Car myCar2 = {45, 180, "toyota", 10.000};

  Car myCar3 = {.speed = 50, .topSpeed = 160, .brand = "nissan", .price = 9000};

  Point firstPoint = {10, 6};

  UnnamedPoint mySecPoint = {6, 8};

  struct UnnamedPoint myThirdPoint = {7, 9};

  int myNum = 5;

  explainCar(myCar);
  explainCar(myCar2);
  explainCar(myCar3);

  startCar(myCar);

  int *returnPtr = functionToReturnPointer();

  printf("my returned ptr value is %d", *returnPtr);

  // create a struct named Truck
  // speed,topSpeed,cargo, color, price,brand;
  // typedef kai xwris typedef
  // ftiakse 3 Trucks

  // kane printf tis aksies enos truck
  // ftiakse ena function pou tha pairnei mesa ena truck kai tha kanei print ta
  // xaraktiristika tou

  return 0;
}
