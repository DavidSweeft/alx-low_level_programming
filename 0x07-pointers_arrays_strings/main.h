#ifndef MAIN_H
#define MAIN_H

/**
 * void prototypes()
 * int prototypes()
 */

int _putchar(char);
char *_memset(char *s, char b, insigned int n);
char *_memscpy(char *dest, char *src, insigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char(*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /*MAIN_H*/
