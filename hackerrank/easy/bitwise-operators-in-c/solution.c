#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here
  int max_and = 0;
  int max_or = 0;
  int max_xor = 0;
  // Iterate through all possible pairs (i, j) where 1 <= i < j <=n
  for (int i= 1; i <= n; i++){
    for (int j = i + 1; j <= n; j++){
        int current_and = i & j;
        int current_or = i | j;
        int current_xor = i ^ j;
        //check if results are strictly less than kand greater than current maximums
        if (current_and < k && current_and > max_and) {
            max_and = current_and;
        }
        if (current_or < k && current_or > max_or) {
        max_or = current_or;
        }
        if (current_xor < k && current_xor > max_xor) {
            max_xor = current_xor;
        }
    }
  }
// print the maximum valurs on new lines
printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
