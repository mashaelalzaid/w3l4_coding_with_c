#include <stdio.h>
#include <stdlib.h>
int main()
{
int x;
char *sentence;
printf("Enter number of characters: ");
scanf("%d", &x);
sentence= (char*) malloc(x * sizeof(char)); //+1 for null terminator

// if memory cannot be allocated
if(sentence == NULL) {
printf("Error! memory not allocated.");
return 1;
}

printf("Enter the sentence: ");

for(int i = 0; i < x; ++i) {
scanf(" %c", sentence + i); 
printf("Reading char '%c' into sentence[%d]\n", sentence[i], i);
}

sentence[x] = '\0'; 

char *rev_sentence = (char*) malloc(x*sizeof(char));

if (rev_sentence == NULL) {
    printf("Error! memory not allocated.");
    return 1;
}

for(int i =0; i<x; i++){
rev_sentence[i]= sentence[x-i-1];
}

//rev_sentence[x] ='\0';

printf("Reversed sentence is: ");
    for (int i = 0; i < x; ++i) {
        printf("%c", rev_sentence[i]);
    }
    printf("\n");


// deallocating the memory
free(sentence);
free(rev_sentence);


return 0;
}
