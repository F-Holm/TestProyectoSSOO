#include "ejemplo/ejemplo.h"

int sumar(int a, int b) { return a + b; }

int restar(int a, int b) { return a - b; }

int multiplicar(int a, int b) { return a * b; }

float dividir(float a, float b) {
  if (b == 0) return 0;
  return a / b;
}
