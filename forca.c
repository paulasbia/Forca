#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

	char palavrasecreta[20];

	sprintf(palavrasecreta, "MELANCIA");

	int acertou = 0;
	int enforcou = 1;

	do {
		char chute;
		scanf("%c", &chute);

	    for (int i = 0; i < strlen(palavrasecreta); ++i) {
	    	if (palavrasecreta [i] == chute) {
	    		printf("A posicao %d tem essa letra!\n", i);
	    	}
		} 
	} while(!acertou && !enforcou);
	
	return 0;
}