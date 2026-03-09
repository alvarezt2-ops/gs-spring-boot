#include <stdio.h>

int factorialRecursive(int n) {
	if (n == 0 || n == 1)
		return 1;
	return n * factorialRecursive(n - 1);
}

int factorialIterative(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	return result;
}

int main() {
	int num;
	char choice;
	
	while(1) {
		printf("Please enter a number between 1-15: ");
		scanf("%d", &num);

		if (num >= 1 && num <= 15) {
			break;
		} else {
			printf("That is not a number between 1-15, please try again\n");
		}
	}

	printf("The number you have chosen is: %d\n", num);

	printf("Is recursion desired?(Y for yes, N for no): ");
	scanf(" %c", &choice);

	if (choice == 'Y') {
		int result = factorialRecursive(num);
		printf("The factorial of %d using recursion is %d\n", num, result);
	}
	else if (choice == 'N') {
		int result = factorialIterative(num);
		printf("The factorial of %d is %d\n", num, result);
	}
	else {
		printf("Invalid option. Please run again and enter Y or N.\n");
	}

	return 0;
}
