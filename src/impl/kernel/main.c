/**
 * TechOS-C 1.0!
 * 
 * COPYRIGHT (C) 2022 ITECH INC.
 * all rights reserved
 * 
 * :)
*/

#include "tty.h"
#include "io.h"
#include "kbd.h"
#include "string.h"
#include "print.h"

void kernel_early(void) {
	terminal_initialize();
}

int kernel_main(void) {
	char *buff;
	strcpy(&buff[strlen(buff)], "");
	printprompt();
	while (1) {
		uint8_t byte;
		while (byte = scan()) {
			if (byte == 0x1c) {
				if (strlen(buff) > 0 && strcmp(buff, "exit") == 0)
					printf("\nGoodbye!");
				printprompt();
				memset(&buff[0], 0, sizeof(buff));
				break;
			} else {
				char c = normalmap[byte];
				char *s;
				s = ctos(s, c);
				printf("%s", s);
				strcpy(&buff[strlen(buff)], s);
			}
			move_cursor(get_terminal_row(), get_terminal_col());
		}
	}
	return 0;
}
