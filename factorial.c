#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int res[1000];
// char *resStr;
// char *resStr1;

// int multiply(int x, int res[], int resSize) {
//   int carry = 0;

//   for (int i = 0; i < resSize; i++) {
//     int prod = res[i] * x + carry;
//     res[i] = prod % 10;
//     carry = prod / 10;
//   }

  

//   while (carry) {
//     res[resSize] = carry % 10;
//     carry = carry / 10;
//     resSize++;
//   }
//   return resSize;
// }

char * factorial(int n) {
  if (n < 0) {
    return "";
  } else { 
    //res[0] = 1; 
    int resSize = 1;
    char* resStr = (char*)malloc(1000*sizeof(char));
    for (int cur = 0; cur < 1000; cur++) {
      resStr[cur] = 48;
    }
    resStr[0] = 49;
 
  //   resStr[0] = 1;
  //   // resStr1 = (char*)malloc(1000*sizeof(char));
  //   // for (int x = 2; x <= n; x++) {
  //   //   resSize = multiply(x, res, resSize);
  //   // }

    for (int curNumb = 1; curNumb <= n; curNumb++) {
      int carry = 0;
      int digitIndex = 0;
      while (resStr[digitIndex] - 48 || carry || digitIndex <= 100) {
        int tempSum = (resStr[digitIndex] - 48) * curNumb + carry;
        printf("%i\n", tempSum);
        resStr[digitIndex] = tempSum % 10 + 48;
        carry = tempSum / 10;
        digitIndex++;
      }
      // return "asd";
    }
    printf("%s", resStr);
  //     //resStr[i] = res[resSize - 1 - i] + '0';
  //   }
  //   // for (int i = 0; i < strlen(resStr); i++) {
  //   //   resStr1[strlen(resStr1)] = resStr[i];
  //  // }
  //  printf("%i\n", resStr[0]);
    return "asd";
  }
}
int main() {
// {if (factorial(250) == "3232856260909107732320814552024368470994843717673780666747942427112823747555111209488817915371028199450928507353189432926730931712808990822791030279071281921676527240189264733218041186261006832925365133678939089569935713530175040513178760077247933065402339006164825552248819436572586057399222641254832982204849137721776650641276858807153128978777672951913990844377478702589172973255150283241787320658188482062478582659808848825548800000000000000000000000000000000000000000000000000000000000000")

  printf("%s\n", (factorial(250)));
// } else {printf("%s\n", "Лох");}
return 0;
}
