#include "stdno.h"

int main() {
  char *O = "brb\n";
  return write(1, O, 1 + 1);
} 
