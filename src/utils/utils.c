#include "utils.h"
#include "assert.h"
#include "stdint.h"

u32 abs_diff(u32 a, u32 b) { return a > b ? a - b : b - a; }

char *sanitize_str(char *str) {
  if (!str) {
    return NULL;
  }
  for (size_t i = 0; i < strlen(str); i++) {
    if (str[i] == '\n' || str[i] == '-') {
      str[i] = ' ';
    }
  }

  return str;
}

// todo
const char **str_split(const char *src, const char *delim) {
  char buf[sizeof(src)];
  return src;
}

