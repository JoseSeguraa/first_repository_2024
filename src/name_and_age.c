#include <stdio.h>

int main(){
	char name[50];
	int age;

	// Ask for the users name

	printf("Enter your name: ");
	scanf("%49s", name);

	// Ask for the users age

	printf("Enter your age: ");
	scanf("%d", &age);

	// Print a message

	printf("Hello, %s! You are %d years old.\n", name, age);

	return 0;
}