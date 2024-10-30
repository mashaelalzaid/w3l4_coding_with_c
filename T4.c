#include <stdio.h>
#include <stdlib.h>

int main(){
//n1
int *a = (int*) malloc(sizeof(int));

//n2
printf("Enter a command (p: push, o: pop, d: display, e: exit):\n");
char command;
scanf(" %c", &command);

int counter=0;

while(command!='e'){

switch(command){

case 'p':
{
int val;
a= (int*)realloc(a, (counter+1) * sizeof(int));
printf("Enter integer to add it to the stack: ");
scanf("%d", &val);
a[counter] = val;
counter++;
break;
}
case 'o':
{
a= (int*)realloc(a, (counter-1) * sizeof(int));
counter--;
break;
}
case 'd':
{printf("Values in stack after DC:\n");
for (int it=0;it<counter; it++){
printf("%d\t", a[it]);
}
break;
}

}

printf("\nEnter a command (p: push, o: pop, d: display, e: exit):\n");
scanf(" %c", &command);
}



    return 0;
}
