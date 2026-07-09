#include <stdio.h>
int main () {

   int n, sum = 0;
   printf ("Enter the size of the Array: ");
   scanf ("%d", &n);

   int arr [n];
   int max = -1; //(initializing the least value, which is -1)

    printf ("Enter the Elements: ");
    for (int i=0; i<=n-1;i++) {
        scanf ("%d", &arr [i]);
    }

    for (int i=0; i<=n-1;i++) {
        if (max < arr [i]) // Check kortesi je element er value ki current maximum value er theke boro naki na. {
            max = arr [i]; // Jodi boro hoy taile oita kei maximum value te dhukay dibo.
        }

    printf ("\nThe max value from the elements are = %d", max);

return 0;
}
