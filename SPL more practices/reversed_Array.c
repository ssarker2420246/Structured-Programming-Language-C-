#include <stdio.h>
int main () {
    int size, temp;
    printf ("Enter the size of an Array: ");
    scanf ("%d", &size);
    int arr [size];

    printf ("Enter the Elements: ");
    for (int i=0; i<size; i++) {
        scanf ("%d", &arr[i]);
    }
    for (int i=0, j=size-1; i<j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
printf ("Reversed Array: ");
    for (int i=0; i<size; i++) {
        printf ("%d ", arr[i]);
    }


return 0;
}
