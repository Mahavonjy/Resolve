#include "my.h"

int main(int argc, char** argv) {

  char c[1000];
  FILE *file;

  for (int i = 1; i < argc; ++i) {
    if ((file = fopen(argv[i], "r")) == NULL)
    {
      printf("Error! opening file");
      exit(1);
    }

    fscanf(file,"%[^\n]", c);

    printf("%s\n", c);
  }

  fclose(file);

  return 0;
}
