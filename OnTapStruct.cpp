#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct person {
	int age;
	float weight;
	char name[30];
};

typedef struct person Person;
Person* createPerson(int* n);

int main()
{
	int i, n;
	Person* people;
	people = createPerson(&n);
	printf("Displaying Information:\n");
	for (i = 0; i < n; ++i)
		printf("\nName: %5s\tAge: %2d \tWeight:%3.2f", people[i].name, people[i].age, people[i].weight);
	return 0;
}
Person* createPerson(int* n) {
	Person* ptrToStructPerson;
	int numberOfPeople;
	printf("Enter the number of persons: ");
	scanf("%d", &numberOfPeople);
	*n = numberOfPeople;
	ptrToStructPerson = (Person*)malloc(numberOfPeople * sizeof(Person));
	printf("\nnunber of bytes allocated: %d\n", numberOfPeople * sizeof(Person));
	for (int i = 0; i < numberOfPeople; i++)
	{
		printf("Enter first name, age and weight respectively: ");
		scanf("%s %d %f", ptrToStructPerson[i].name, &(ptrToStructPerson[i].age), &(ptrToStructPerson[i].weight));
	}
	
	return ptrToStructPerson;
}