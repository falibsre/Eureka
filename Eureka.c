#include <stdio.h>
#include <stdarg.h>
void print(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}
void waen() {
  printf("\nPress enter to continue...\n");
  getchar();
}
int square(int number) {
  return number * number;
}