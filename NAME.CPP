#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main() {
	clrscr();

	char name[100];
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin); // Use this to accept strings with spaces. Not only first word after space.
	printf("Name: %s", name);

	// MARK: Getting length of string
	printf("First letter of the name: %c", name[0]);
	int lengthOfName = strlen(name) - 1; // Decrease length by 1 to avoid including newlines in actual count
	printf("\nNumber of letters and characters: %d", lengthOfName);

	// MARK: Copy from one string to another
	char fullName[500];
	strcpy(fullName, name); // Copy from name to fullName
	printf("\n%s", fullName);

	// MARK: String concatenation
	char studentName[50] = "Jezreel Joshua ", lastName[50] = "Martin";
	strcat(studentName, lastName);
	printf("Full Name: %s\n", studentName);
	// MARK: String comparison
	char firstString[50] = "hello";
	char secondString[50] = "hello";
	int isSame = strcmp(firstString, secondString);
	if (isSame != 0) {
		printf("Two strings are NOT the same.");
	} else {
		printf("Two strings are SAME.");
	}

	getch();
}