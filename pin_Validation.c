#include <stdio.h>
#include <stdlib.h>

int userResponse = 0;
int main() {
	int pinA[6] = { 0 };
	int pinB[6] = { 0 };
	int i = 0;

	do {
		printf("\n\tWelcome to the PIN Verification Program\n");
		printf("\t1\tPlease enter your PIN twice\n");
		printf("\t2\tPINS Match\n");
		printf("\t3\tPIN should not start with a 0\n");
		printf("\t4\tExit\n");
		scanf_s("%d", &userResponse);
		switch (userResponse) {
		case 1:

			printf("\nPlease enter a SIX digit PIN numner separated by spaces. Please do not start with 0!\n");

			scanf_s("%d %d %d %d %d %d", &pinA[0], &pinA[1], &pinA[2], &pinA[3], &pinA[4], &pinA[5]);

			printf("\nPlease Re-Enter your SIX digit PIN with spaces: \n");
			scanf_s("%d %d %d %d %d %d", &pinB[0], &pinB[1], &pinB[2], &pinB[3], &pinB[4], &pinB[5]);
			break;
		case 2:
			pinA[i] = pinA[0], pinA[1], pinA[2], pinA[3], pinA[4], pinA[5];
			pinB[i] = pinB[0], pinB[1], pinB[2], pinB[3], pinB[4], pinB[5];
			if (pinA[i] == pinB[i]) {
				printf("The pins match!");
			}
			else
				printf("Pins do not match! Please try again!");
			break;
		case 3:
			if (pinA[0] == 0 && pinB[0] == 0) {
				printf("PINs should not start with a zero! PIN is invalid!\n");
			}
			else
				printf("Congratulations, your code did not start with a zero.\n");
			break;
		case 4:
			printf("Exiting");
			break;
		default:
			printf("Enter a valid selection.");
			break;
		}
	} while (userResponse != 4);

	return 0;
}
