#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main() {
	clrscr();

	char alphabets[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	for (int index = 0; index < 26; index++) {
		printf("%c ", tolower(alphabets[index]));
		// tolower(character) is used to convert character to lowercased form.
		// tolower is from ctype.h
	}

	int sum = 0;
	int numbers[5] = {1,2,3,4,5};
	for (int index2 = 0; index2 < 5; index2++) {
		sum += numbers[index2];
	}
	printf("\nSummation of 1, 2, 3, 4 and 5 is %d.", sum);

	// Row is horizontal. Column is vertical.
	int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for (int row = 0; row < 3; row++) {
		for (int column = 0; column < 3; column++) {
			printf("%d\t",matrix[row][column] * 5);
		}
		printf("\n");
	}
	getch();
}