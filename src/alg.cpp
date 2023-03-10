// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if (n == 0) {
    return 1;
  }
  return value * pown(value, n - 1);
}

uint64_t fact(uint16_t n) {
  if (n == 1) {
    return 1;
  }
  return n * fact(n - 1);
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double e = 1;
  for (int i = 1; i <= count; i++) {
    e = e + calcItem(x, i);
  }
  return e;
}

double sinn(double x, uint16_t count) {
  double s = 0;
  for (int i = 1; i <= count; i++) {
    s = s + (pown(-1, i - 1) * calcItem(x, 2 * i - 1));
  }
  return s;
}

double cosn(double x, uint16_t count) {
  double c = 0;
  for (int i = 1; i <= count; i++) {
    c = c + (pown(-1, i - 1) * calcItem(x, 2 * i - 2));
  }
}
