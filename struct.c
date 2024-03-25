#include <stdio.h>

// struct Truck
typedef struct Truck {
  double speed;
  double topSpeed;
  char *cargo;
  char *color;
  double price;
  char *brand;
} Truck;

typedef long int kilometers;

typedef char *str;

char *mytString = "nikos";

// long int myKilometers = 150;
kilometers myKilometers = 200;

void Truckfunction(Truck truck) {
  printf("my truck's speed is %.1f , it's top speed is %.1f, it's cargo is "
         "%s,it's "
         "color is %s , it's price is %.1f,it's brand is %s , \n",
         truck.speed, truck.topSpeed, truck.cargo, truck.color, truck.price,
         truck.brand);
}

int main() {

  Truck myTruck1 = {.speed = 60.0,
                    .topSpeed = 90.0,
                    .cargo = "dairy product",
                    .color = "white",
                    .price = 100000.0,
                    .brand = "toyota"};

  struct Truck myTruck2 = {.speed = 70,
                           .topSpeed = 100,
                           .cargo = "plants",
                           .color = "green",
                           .price = 75000,
                           .brand = "volvo"};

  struct Truck myTruck3 = {.speed = 80,
                           .topSpeed = 150,
                           .cargo = "cotton",
                           .color = "black",
                           .price = 150000,
                           .brand = "renault"};

  printf("H aksia enos Truck einai : %.1f\n", myTruck2.price);

  Truckfunction(myTruck1);

  // create a struct named Truck
  // speed,topSpeed,cargo, color, price,brand;
  // typedef kai xwris typedef
  // ftiakse 3 Trucks

  // kane printf tis aksies enos truck
  // ftiakse ena function pou tha pairnei mesa ena truck kai tha kanei print ta
  // xaraktiristika tou

  return 0;
}
