// array intersection at specified position
#include <stdio.h>
int main () {
    int arr[100], n , element, pos, i;

    printf("enter a number of element: ");
    scanf("%d", &n);

    printf("enter array element: ");
    for(i =  0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("original array: ");
    for(i = 0; i < n; i++ ){
        printf("%d", arr[i]);
    }
    printf("\nenter element to insert: ");
    scanf("%d", &element);

    printf("enter position: ");
    scanf("%d", &pos);

    for( i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    printf("updated array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}