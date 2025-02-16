#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  if (sizeof(time_t) != 8) return 1;
  time_t its = time(0);
  if (its == -1) return 1;
  printf("%ld\n", its);
  printf("D+%ld-%ldRSec\n",
	    its/86400, (86400 - (its % 86400));
  return 0;
}
