#include <stdio.h>
int main () {

   int n, sumEVEN, sumODD, Result;
   printf ("Enter the size of the Array: ");
   scanf ("%d", &n);

   int arr [n];

    printf ("Enter the Elements: ");
    for (int i=0; i<=n-1;i++) {
        scanf ("%d ", &arr [i]);
    }

    for (int i=0; i<=n-1; i++) {
        if (i%2==0) {
           sumEVEN += arr [i];
        }
        else {
           sumODD += arr [i];
        }
    }

    Result = sumEVEN - sumODD;

printf ("The result is = %d", Result);

return 0;
}
