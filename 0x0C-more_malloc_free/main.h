#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void _puts(char *str);
int _putchar(char c);
int atoi(const char *s);
void print_int(unsigned long int n);
#endif
