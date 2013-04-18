#include <stdio.h>

#define MAX_NAME_SIZE 30
#define MAX_PASS_SIZE 30
#define TRUE 1
#define FALSE 0

typedef int boolean;
typedef struct {
    char sUsername[MAX_NAME_SIZE];
    char sPassword1[MAX_PASS_SIZE];
    char sPassword2[MAX_PASS_SIZE];
} acDetails;

// Declare functions
int ShowMenu();
char GetUserMenuOption();
int MenuNewUser();
int MenuNewUser();
int GetUserAcDetails(acDetails);

int main() {

	ShowMenu();
	return 0;
}

int ShowMenu() {

	char cMenuChoice;

	// Print the game title and copyleft warning to the screen

	printf(" ________________________________________________________\n");
	printf("/  _    _   _   _____ _____ ____  __  _    _ . _    ___  \\\n");
	printf("|  |\\  /|  /_\\  \\____   |   |___  |_| |\\  /| | |\\ | |  \\ |\n");
	printf("|  | \\/ | /   \\ ____/   |   |___  | \\ | \\/ | | | \\| |__/ | \n");
	printf("\\________________________________________________________/\n");
	printf("\nCopyleft: Rob Drury.\nAll wrongs reserved.\n\n");

	/*
	 * While loop with initial & subsequent reads
	 * for verification serves as the main menu.
	 * GetUserMenuOption() displays options and
	 * returns the user's choice.
	 */

	cMenuChoice = GetUserMenuOption();

	/*
	 * Line below makes sure that the character input
	 * by the user is valid by comparing its ASCII value.
	 */

	while (cMenuChoice < 49 || cMenuChoice > 53) {

		printf("\nERROR: Invalid entry\n\n\n");
		cMenuChoice = GetUserMenuOption();
	}


	switch (cMenuChoice) {

		case '1':
			//printf("1");
			MenuNewUser();
			break;
		case '2':
            printf("2");
			//MenuLoadUser();
			break;
		case '3':
            printf("3");
			//MenuShowScores();
			break;
		case '4':
            printf("4");
			//MenuHelp();
			break;
		case '5':
            printf("5");
			//MenuExit();
			break;

		default:
			printf("ERROR. Wrong value passed to switch.");

	}

	return 0;
}

char GetUserMenuOption() {

	char cMenuChoice;

    printf("******\n");
	printf("*MENU*\n");
	printf("******\n\n");
	printf("1: New user\n");
	printf("2: Load user\n");
	printf("3: High scores\n");
	printf("4: Help\n");
	printf("5: Exit\n\n");
	printf("Enter your choice: ");

	scanf("%c", &cMenuChoice);
	return cMenuChoice;
}

int MenuNewUser() {

    acDetails *acdVerifiedDetails, acdUnverifiedDetails;

    acdVerifiedDetails = &acdUnverifiedDetails;

    GetUserAcDetails(*acdVerifiedDetails);

    return 0;
}

int GetUserAcDetails(acDetails *acdUnverifiedDetails) {

    int iCount;
    boolean bPasswordVerified=FALSE;

    struct struDetails {
        char sUsername[MAX_NAME_SIZE], sPassword1[MAX_PASS_SIZE], sPassword2[MAX_PASS_SIZE]);
    }

    while (bPasswordVerified = FALSE) {

        printf("Enter your FIRST name: ");
        scanf("%s", &sUsername);
        printf("\nEnter your password (no spaces!): ");
        scanf("%s", &sPassword1);
        printf("\nEnter your passsword again for verification: ");
        scanf("%s", &sPassword2);

        for (count = 0; count <= MAX_PASS_SIZE; count++) {

            if (sPassword1[count] != sPassword2[count]) {
                printf("ERROR: Passwords don't match!\n\n");
                break;
            }

            else if (count == MAX_PASS_SIZE) {
                bPasswordVerified = TRUE;
            }
        }
    }

    return 0;
}
