/*
 * $FreeBSD$
 *
 *  Top users/processes display for Unix
 *
 *  This program may be freely redistributed,
 *  but this entire comment MUST remain intact.
 *
 *  Copyright (c) 1984, 1989, William LeFebvre, Rice University
 *  Copyright (c) 1989, 1990, 1992, William LeFebvre, Northwestern University
 */

int atoiwi(char *);
char *itoa(int);
char *itoa7(int);
int digits(int);
char *strecpy(char *, char *);
char **argparse(char *, int *);
long percentages(int, int *, long *, long *, long *);
char *format_time(long);
char *format_k(int);
char *format_k2(unsigned long long);
int string_index(char *string, char **array);

