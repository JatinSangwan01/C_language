#include<stdio.h>

int main(){
char d= '*';
int count=0;
  while (1) { // Infinite loop
        for (int i = 0; i < count; i++) {
            printf("%c", d); // Print '*' character
        }
        printf("\n"); // Newline after printing current count of '*'
        count++;
  }
    
     return 0;
}
