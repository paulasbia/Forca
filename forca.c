#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

	char palavrasecreta[20];

	sprintf(palavrasecreta, "MELANCIA");

	int acertou = 0;
	int enforcou = 0;

	do {

		for (int i = 0; i < strlen(palavrasecreta); ++i) {
			printf("_ ");
		}
		printf("\n");
		
		char chute;
		scanf(" %c", &chute);

	} while(!acertou && !enforcou);
	
	return 0;
}