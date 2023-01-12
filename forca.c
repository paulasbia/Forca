#include <stdio.h>

	/*informações importantes
	char letra = "m"; guarda uma letra
	printf("%c", letra); vai ler a letra 
	*/

int main(int argc, char const *argv[]) {

	char palavrasecreta[20];

	palavrasecreta[0] = 'M';
	palavrasecreta[1] = 'E';
	palavrasecreta[2] = 'L';
	palavrasecreta[3] = 'A';
	palavrasecreta[4] = 'N';
	palavrasecreta[5] = 'C';
	palavrasecreta[6] = 'I';
	palavrasecreta[7] = 'A';

	// colocando o \0 para indicar que a string acabou
	palavrasecreta[8] = '\0';

	printf("%c%c%c%c%c%c%c%c\n", palavrasecreta[0], palavrasecreta[1], palavrasecreta[2],
	palavrasecreta[3], palavrasecreta[4], palavrasecreta[5],palavrasecreta[6],
	palavrasecreta[7] );
	return 0;
}