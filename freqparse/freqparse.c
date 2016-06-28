#include <stdio.h>

int main () {
  int c, nlcase, nother, nwhite;
  int ndigit;

  nlcase = nother = nwhite = 0;
    ndigit = 0;

  while ((c = getchar()) != EOF)
      if (c >= '0' && c <='9')
        ++ndigit;
      else if (c >='a' && c <= 'z')
        ++nlcase;
      else if (c == ' ' || c == '\n'  || c == '\t')
        ++nwhite;
      else
        ++nother;

  printf("digits = %d", ndigit);
  printf(", lower case = %d, other = %d\n,", nlcase, nother);
return 0;
}
