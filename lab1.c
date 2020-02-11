#include <stdio.h>
#include <stdlib.h>

#define ANSI_RED "\033[1;31m"
#define ANSI_GREEN "\033[1;32m"
#define ANSI_YELLOW "\033[1;33m"
#define ANSI_BLUE "\033[1;34m"
#define ANSI_PURPLE "\033[1;35m"
#define ANSI_CYAN "\033[1;36m"
#define ANSI_RESET "\033[0m"
int main (int argc, char *argv[])
{
	if (argc < 2) {	
		printf("This program is going to do 3 similar things:");
		printf("\n	1: First is printing Hello World using a for loop which iterates from 0 until the sizeof(int)");
		printf("\n	2: The second is going to print Hello world in a loop once again, except it is going to iterate from 0 to sizeof(long).\n");
		printf("	3:Last will be printing 'Hello World' in a double-helix like pattern with each iteration of the loop printing in a different color. The loop will iterate from 0 to 255\n\n");
		for (int i = 0; i < sizeof(int); i++) {
			printf("Hello World ");
		}
		printf("\n");
		for (int j = 0; j < sizeof(long);j++) {
			printf("Hello World ");
		}
		printf("\n\n");
		for (int k = 0; k < 255; k++) {
			printf (ANSI_RED "Hello World\n");
			printf (ANSI_GREEN " ello Worl\n");
			printf (ANSI_YELLOW "  llo Wor\n");
			printf (ANSI_BLUE "   lo Wo\n");
			printf (ANSI_CYAN "    o W\n");
			printf (ANSI_CYAN "    W o\n");
			printf (ANSI_BLUE "   oW ol\n");
			printf (ANSI_YELLOW "  roW oll\n");
			printf (ANSI_GREEN " lroW olle\n");
			printf (ANSI_RED "dlroW olleH\n");
			printf (ANSI_GREEN " lroW olle\n");
			printf (ANSI_YELLOW "  roW oll\n");
			printf (ANSI_BLUE "   oW ol\n");
			printf (ANSI_CYAN "    W o\n");
			printf (ANSI_CYAN "    o W\n");
			printf (ANSI_BLUE "   lo Wo\n");
			printf (ANSI_YELLOW "  llo Wor\n");
			printf (ANSI_GREEN " ello Worl\n");
		}
		printf(ANSI_RED "Hello World");
		printf("\n");
		return 0;
	} else {
		printf ("For some odd reason, there was an attempt to pass a command or file to this program. I wouldn't try that\n");
		return 0;
	}
}

