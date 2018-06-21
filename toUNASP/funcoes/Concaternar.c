#include <stdio.h>
#include <memory.h>

int main(int argc, char** argv) {

      char* str1;
      char* str2;
      str1 = "sssss";
      str2 = "kkkk";
      char * str3 = (char *) malloc(1 + strlen(str1)+ strlen(str2) );
      strcpy(str3, str1);
      strcat(str3, str2);
      printf("%s", str3);

      return 0;
 }
