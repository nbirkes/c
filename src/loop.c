#include<stdio.h>

void printHelloWorld5Times() {
  int i = 5;
  while (i > 0) {
    puts("Hello world.");  
    i = i - 1;
  }
}

int main(int argc, char** argv) {
  printHelloWorld5Times();
}

