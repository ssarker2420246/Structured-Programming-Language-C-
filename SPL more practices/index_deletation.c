#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,index;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf ("Enter the Elements: ");
    for (int i=0; i<size; i++) {
        scanf ("%d", &arr [i]);
    }
    printf ("Enter index to delete: ");
    scanf ("%d", &index);
     for (int i=0; i<size; i++) {
        if (i==index) {
            for (int j=i; j<size-1;j++) {
                arr [j] = arr [j+1];
            }
            size--;
        }
     }
     printf ("Array after deletation: ");
     for (int i=0; i<size; i++) {
        printf ("%d ", arr [i]);
     }

return 0;
}
