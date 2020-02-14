#include <stdio.h>
#include <stdlib.h>

#define ANSI_RED "\033[1;31m"
#define ANSI_GREEN "\033[1;32m"
#define ANSI_YELLOW "\033[1;33m"
#define ANSI_BLUE "\033[1;34m"
#define ANSI_PURPLE "\033[1;35m"
#define ANSI_CYAN "\033[1;36m"
#define ANSI_RESET "\033[0m"
void print_double_helix() {
{
	printf("3:Last will be printing 'Hello World' in a double-helix like pattern with each iteration of the loop printing in a different color. The loop will iterate from 0 to 255\n\n");
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
}
	
