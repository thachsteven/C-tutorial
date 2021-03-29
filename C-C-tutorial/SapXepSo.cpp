#include <stdio.h>


int main()
{
    int array[100];
    int n, i;

    
    printf("Enter size of the array: ");
    scanf("%d", &n);

   
    printf("Enter elements in array: \n");
    for(i=0; i<n; i++) {
   		scanf("%d", &array[i]);
    }

    
    printf("\nArray in reverse order: ");
    for(i = n-1; i>=0; i--) {
    	printf("%d\n", array[i]);
    }

    return 0;
}
