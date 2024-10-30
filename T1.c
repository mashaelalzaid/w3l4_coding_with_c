#include <stdio.h>
#include <stdlib.h>
int main()
{
int x, *ptr_x, *ptr_y, *ptr_z, a,b;
printf("Enter number of elements: ");
scanf("%d", &x);

ptr_x = (int*) malloc(x * sizeof(int));
ptr_y = (int*) malloc(x * sizeof(int));
ptr_z = (int*) malloc(x * sizeof(int));

// if memory cannot be allocated
if(ptr_x == NULL || ptr_y == NULL || ptr_z == NULL) {
printf("Error! memory not allocated.");
return 1;
}
printf("Enter elements of x: ");
for(int i = 0; i < x; ++i) {
scanf("%d", ptr_x + i); 
}

printf("Enter elements of y: ");
for(int i = 0; i < x; ++i) {
scanf("%d", ptr_y + i); 
}

printf("Enter elements of a and b: ");
scanf("%d", &a);
scanf("%d", &b);

for(int i =0; i<x; i++){
*(ptr_z+i)= a*(*ptr_x+i) + b*(*ptr_y+i);
}

for(int i =0; i<x; i++){
printf("%d\t",ptr_z[i]);
}
// deallocating the memory
free(ptr_x);
free(ptr_y);
free(ptr_z);

return 0;
}
