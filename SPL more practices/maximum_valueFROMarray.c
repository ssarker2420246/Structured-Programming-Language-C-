#include <stdio.h>
int main () {

   int n, sum = 0;
   printf ("Enter the size of the Array: ");
   scanf ("%d", &n);

   int arr [n];
   int min = -3809423932; //(initializing a least value, and checking it with others)

    printf ("Enter the Elements: ");
    for (int i=0; i<=n-1;i++) {
        scanf ("%d", &arr [i]);
    }

    for (int i=0; i<=n-1;i++) {
        if (min > arr [i]) // Check kortesi je element er value ki current maximum value er theke boro naki na. {
            min = arr [i]; // Jodi boro hoy taile oita kei maximum value te dhukay dibo.
        }

    printf ("\nThe minimum value from the elements are = %d", min);

return 0;
}
