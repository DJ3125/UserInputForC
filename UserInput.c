#include <stdio.h>

int main(){
  printf("Hello World!\nWhat is your name????");
  
  const int BUFFER_SIZE = 15;
  char buffer[BUFFER_SIZE];
  fgets(buffer, BUFFER_SIZE, stdin);

  printf("%s", buffer);
  
  return 0;
}