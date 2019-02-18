#include "my.h"

int sizeF(char *str)
{
  int n = 0;
  char c;
  FILE *file;
  if ((file = fopen(str, "r")) != NULL) {
      while((c =fgetc(file)) != EOF){
        if(c == '\n')
          ++n;
      }
    } else
      return (-1);    
  fclose(file);
  return (n);
}


int main(int argc, char** argv) 
{

  //char *str = malloc(1000);
  FILE *file;

  for (int i = 1; i < argc; ++i) {
    if ((file = fopen(argv[i], "r")) != NULL) {
         printf("%d\n", sizeF(argv[i]));
    } else
      return (-1);    
  }
  fclose(file);
  return 0;
}
