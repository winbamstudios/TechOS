#include "print.h"
#include "tty.h"
#include "io.h"
#include "kbd.h"
#include "string.h"

char* inputstr;
char* buff;
char* getprompt() {
    	uint8_t byte;
		while (byte = scan()) {
			if (byte == 0x1c) {
				return buff;
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