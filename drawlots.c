#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef struct {

	char name[100];

}PERSON;
int main() {

	srand(time(NULL));
	int random,i,j;
	PERSON *p;
	int choice, selection;
	printf("How many choices are there: ");
	scanf("%d", &choice);
	printf("How many selection do you need: ");
	scanf("%d", &selection);
	p = (PERSON*)calloc(1,sizeof(PERSON));
	for (i = 0; i < choice; i++) {
		printf("Enter the %d. choice: ",i+1);
		scanf("%s", &p[i].name);
		p = (PERSON*)realloc(p,sizeof(PERSON)*(i+2));
	}
	for (i = 0; i < selection; i++) {
		
		random=rand() % choice;
     	printf("\n%d. selection is %s\n",i+1, p[random].name);
     	p[random]=p[choice-1];
     	choice--;

	}
	return 0;
}
