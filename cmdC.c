#include <stdio.h>

int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

  int AM;
  char name[30];
  /*
  FILE *fd = fopen("students.dat", "w");

  if (fd == NULL) {
    printf("File could not be opened\n");
  } else {
    printf("Enter AM and name,\n");
    printf("Enter EOF to end input.\n");
    printf("?␣");
    scanf("%d%s", &AM, name);
    while (!feof(stdin)) {
      fprintf(fd, "%d␣%s\n", AM, name);
      printf("?␣");
      scanf("%d%s", &AM, name);
    }
    fclose(fd);
  }
  */

  FILE *fd = fopen("students.dat", "r");
  if (fd == NULL) {
    printf("File␣could␣not␣be␣opened\n");
  } else {
    printf("%s %s\n", "AM", "Name");
    fscanf(fd, "%d%s", &AM, name);
  }
  while (!feof(fd)) {
    printf("%d %s\n", AM, name);
    fscanf(fd, "%d%s", &AM, name);
  }
  fclose(fd);
}
