#include <stdio.h>
#include <stdlib.h>

int main(){
//n1
int *a = (int*) malloc(sizeof(int));

//n2
printf("enter integer\n");
int val;
scanf("%d", &val);
a[0] = val;

printf("Do you want to add more samples (y/n or 1/0) ");
int entry;
scanf("%d", &entry);
int counter =1;
while(entry == 1){
a= (int*)realloc(a, (counter+1) * sizeof(int));
printf("enter integer\n");
scanf("%d", &val);
a[counter] = val;
printf("Do you want to add more samples (y/n or 1/0) ");
scanf("%d", &entry);
counter++;
}

int sum=0;
for (int it=0;it<counter; it++){
sum += *(a+it);
}
float avg = sum/counter;

printf("Avg is %f\n", avg);

for (int it=0;it<counter; it++){
a[it]= a[it] - (int)avg;
}

printf("Values after DC:\n");
for (int it=0;it<counter; it++){

printf("%d\t", a[it]);
}


    return 0;
}
