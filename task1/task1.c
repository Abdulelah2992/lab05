#include <stdio.h>

int main() {
    int intArray[4];
    char charArray[4];
    short shortArray[4];
    double doubleArray[4];

      printf("Integer Array: \n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", &intArray[i]);
    }
   printf("Character Array:\n");
     
   for (int i = 0; i < 4; i++) {
        printf("%p\n", &charArray[i]);
    }
  
   printf("Short Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", &shortArray[i]);
    }
 
       printf("Double Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", &doubleArray[i]);
    }

    return 0;
}

