#include "ejemplo/ejemplo.h"

int Sumar(int a, int b) {
  return a + b;
}

int Restar(int a, int b) {
  return a - b;
}

int Multiplicar(int a, int b) {
  return a * b;
}

float Dividir(float a, float b) {
  if (b == 0)
    return 0;
  return a / b;
}
