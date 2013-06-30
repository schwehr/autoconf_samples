#include "config.h"

#include <stdio.h>

int main(void) {
#ifdef WORDS_BIGENDIAN
  printf("big\n");
  return 1;
#else
  printf("little\n");
  return 0;
#endif
}
