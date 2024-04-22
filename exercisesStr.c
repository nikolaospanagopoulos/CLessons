#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // create some strings using array way and char pointer way
  char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};

  char *greeting2 = "hello";

  printf("%s\n", greeting);
  printf("%s\n", greeting2);

  char *stringToNumber = "123";

  int number = atoi(stringToNumber);

  printf("%d\n", number);

  char *stringToDouble = "123.5";

  double flNumber = atof(stringToDouble);

  printf("%f\n", flNumber);

  char digit = '5';

  // 0 false any other value true
  printf("is digit a number or not? %d\n", isdigit(digit));
  printf("is digit a number? %s\n", isdigit(digit) ? "true" : "false");

  const char *str = "9999999999z";

  char *endPointer;

  long val = strtol(str, &endPointer, 10);

  printf("strtol: %ld, stopped at: %s\n", val, endPointer);

  long val2 = atol(str);

  printf("atol: %ld\n", val2);

  const char *doubleStr = "9999.999999z";
  char *endPtr2;
  double doubleVal = strtod(doubleStr, &endPtr2);
  printf("strtod: %lf, stopped at: %s\n", doubleVal, endPtr2);

  int result = puts("hello world!!!!!!\n");

  int result2 = putchar('y');

  ///////////////////////////////////

  char buffer[100];

  int age = 25;

  float height = 1.8;

  sprintf(buffer, "my age is %d, my height is %.1f", age, height);

  printf("%s\n", buffer);
  ///////////////////////////////////

  char *info = "Age:30, height: 1.7";

  int extractedAge;

  double extractedHeight;

  sscanf(info, "Age:%d, height: %lf", &extractedAge, &extractedHeight);

  printf("extracted age %d and extractedHeight %lf\n", extractedAge,
         extractedHeight);
  //////////////////////////////////

  char *strToBeCopied = "hello";

  char resultCopy[6];
  //  /h/ /e/ /l/ /\0/

  // strcpy(resultCopy, strToBeCopied);
  strncpy(resultCopy, strToBeCopied, 5);
  resultCopy[5] = '\0';

  printf("copy success %s\n", resultCopy);

  char s[20];

  strcat(s, "hello world ");
  strcat(s, "nikos");

  printf("%s\n", s);

  char s2[20];

  strncat(s2, "hello world ", 13);
  strncat(s2, "nikos", 6);

  printf("%s\n", s2);

  int result3 = strcmp("hello", "hello");     // if equal result is 0
  int result4 = strncmp("heldo", "hellx", 3); // if equal result is 0

  printf("result is %d\n", result3);
  printf("result is %d\n", result4);

  printf("----------------------Exercises---------------------------\n");
  // create some strings using array way and char pointer way

  char array[] = {'A', 'r', 'r', 'a', 'y', '\0'};

  char *array2 = "Array";

  printf("%s\n", array);
  printf("%s\n", array2);

  // use the above methods to transform "127.5" -> 127.5 double

  char *c_double = "127.5";

  double new_double = atof(c_double);

  printf("%lf\n", new_double);

  // use the above methods to print every char of "hello world" in capital
  // letter

  printf("0000000000000000000000000000000000000000000000000000\n");
  char *hello = "hello world";
  char hello2[] = {'h', 'e', 'l', 'l', 'o', '\n'};

  char *hello3 = (char *)malloc(6);

  strncpy(hello3, hello2, strlen(hello2) + 1);
  hello3[5] = '\n';

  // for (int i = 0; i < 6; i++) {
  //  hello3[i] = hello2[i];
  //}

  printf("hello3 %s\n", hello3);

  printf("hello2: %p\n", hello2);
  printf("hello2: %c\n", *hello2);
  for (int i = 0; i < strlen(hello); i++) {
    char upped = toupper(hello[i]);
    printf("capital letter: %c\n", upped);
  }

  printf("%s\n", hello);

  // use atoi to transform "10" -> 10

  char *num = "10";

  int new_num = atoi(num);

  printf("%d\n", new_num);

  // study pdf and study everything we spoke about except for passing  char  to
  // functions

  // compare two string world and world and print "equal" if result is 0

  char *string1 = "world";

  char *string2 = "world";

  int result_new = strcmp(string1, string2); // if equal result is 0

  printf("result is %d\n", result_new);

  // create a 100char buffer hint -> char buff[100]; and copy another string in
  // it

  printf("000000000000000000000000000000000000\n");
  char buff[100];

  sprintf(buff, "%s", hello);

  printf("%s\n", buff);

  // with strcpy and strnpy use sprintf to write a height and a name into a
  // string

  char string_new[100];

  char *name = "myrto";

  char *Height = "1.65";

  char namecopied[6];

  char Heightcopied[5];

  strcpy(namecopied, name);

  strncpy(Heightcopied, Height, 4);

  sprintf(string_new, "my name is %s and my height is %s\n", namecopied,
          Heightcopied);

  printf("%s\n", string_new);

  // use sscanf to extract a height and a name from a string
  //->hint above examples

  char *extract = "Height:1.80,name: george";

  double extrheight;

  char extrname;

  sscanf(extract, "Height:%lf,name: %s", &extrheight, &extrname);

  printf("%s\n", extract);

  char *stringToFindFirstOcc = "my name is XXXXX";

  printf("first occurance of X is %p\n", strchr(stringToFindFirstOcc, 'X'));

  char *firstOcc = strchr(stringToFindFirstOcc, 'X');
  if (firstOcc) {
    printf("first occurance of X is %p\n", strchr(stringToFindFirstOcc, 'X'));
  } else {
    printf("character not found\n");
  }

  char *stringToFindLastOcc = "my name is XXXXX";

  printf("last occurance of X is %p\n", strrchr(stringToFindFirstOcc, 'X'));

  char *LastOcc = strrchr(stringToFindFirstOcc, 'X');
  if (LastOcc) {
    printf("last occurance of X is %p\n", strrchr(stringToFindFirstOcc, 'X'));
  } else {
    printf("character not found\n");
  }

  char *toSearchForAString = "Hello World";

  char *worldExists = strstr(toSearchForAString, "World");

  if (worldExists) {
    printf("the string contains world\n");
  } else {
    printf("the string doesnt contain world\n");
  }

  /*

  char email[80], token[] = "@.", *c;

  printf("type email address:");

  scanf("%s", email);

  c = strtok(email, token);

  if (c != NULL) {

    printf("%s", c);

    while ((c = strtok(NULL, token)) != NULL)

      printf(", %s", c);
  }
  */

  char str2[] = "Hello, world! Welcome to C programming.";
  const char *splitAt = " ,!";

  char *token2 = strtok(str2, splitAt);

  while (token2 != NULL) {
    printf("token: %s\n", token2);
    token2 = strtok(NULL, splitAt);
  }

  printf("000000000000000000000000000000000000000000000");

  int src[] = {10, 20, 30, 40, 50};

  int dest[5];

  /*
  for (int i = 0; i < 5; i++) {
    dest[i] = src[i];
  }
  */

  memcpy(dest, src, sizeof(src));
  printf("copied array:\n");

  printf("[");
  for (int i = 0; i < 5; i++) {
    printf("%d, ", dest[i]);
  }

  printf("]\n");

  printf("000000000000000000000000000000000000000000000\n");

  char str3[100] = "Learningisfun";

  char *first = str3;
  char *sec = str3;

  memmove(sec + 8, first, 10);

  printf("memmove result %s\n", str3);

  char arrayToSet[20];
  memset(arrayToSet, 'A', sizeof(arrayToSet) - 1);
  arrayToSet[sizeof(arrayToSet) - 1] = '\0';

  struct Account {
    int id;
    double balance;
  };

  struct Account acc1 = {1, 1000};

  struct Account acc2;
  char data[] = "Move within array";
  memmove(data + 11, data + 5, 6);
  printf("%s\n", data);

  return 0;
}

// 1. copy an array of int to another array using memcpy   example above
// 2. create a str and using memset make all characters except \0 to any value
// 3. copy contents of acc1 to account2 -> hint memcpy
// char data[] = "Move within array";
// move "within" 5 characters to the right ->hint -> 1 char 1 byte
// 4.use strtok to create tokens seperated by space or comma in the following
// str = "I met my friend John Yesterday";
