// Common off-by-one defects ,But Cxdeveloper can not find

#include   <iostream> 

int main(int argc, char* argv[]) {
 char source[10];
 strcpy(source, "0123456789");
 // char *dest = (char *)malloc(strlen(source));
  for (int i=1; i <= 11; i++) {
 dest[i] = source[i];
 a=i;
  }
  dest[i] = '\0';
  printf("dest = %s", dest);

 }
