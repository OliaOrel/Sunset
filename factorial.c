#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * factorial(int n) {
  if (n < 0) {
    return "";
  } else { 
    int resSize = 1;
    char* resStr = (char*)malloc(1000*sizeof(char));
    for (int cur = 0; cur < 1000; cur++) {
      resStr[cur] = 48;
    }
    int countDigits = 1;
    resStr[0] = 49;
    for (int curNumb = 1; curNumb <= n; curNumb++) {
      int carry = 0;
      int digitIndex = 0;
      while (digitIndex <= 999) {
        int tempSum = (resStr[digitIndex] - 48) * curNumb + carry;
        resStr[digitIndex] = tempSum % 10 + 48;
        carry = tempSum / 10;
        digitIndex++;
      }
    }
    int countDigitIndex = 999;
    while (resStr[countDigitIndex] == '0') {
      resStr[countDigitIndex--] = 0;
    }
    char reverseRes[1000];
    for (int countSymbIndex = 0; countSymbIndex < 1000; countSymbIndex++) {
      reverseRes[countSymbIndex] = resStr[strlen(resStr) - 1];
      resStr[strlen(resStr) - 1] = 0;
    }
    printf("%s", reverseRes);
    return reverseRes;
  }
}
int main() {
  factorial(86);
  return 0;
}
