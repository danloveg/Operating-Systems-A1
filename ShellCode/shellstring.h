/*
 * shellstring.h
 *
 * Author: Daniel Lovegrove
 *
 * Version: January 21/2018
 *
 * Definitions for shellstring.c
 */

#ifndef SHELL_STRING_C

#define SHELL_STRING_C

int countTokens(const char *str, const char *del);
void removeTrailingNewline(char *str);

#endif
