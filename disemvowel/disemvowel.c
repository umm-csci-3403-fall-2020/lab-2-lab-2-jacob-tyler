#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  int len, i, j, x;
  x=0;
  len = strlen(str);
  char *tmp;
  char *result;
  tmp = (char*) calloc(50000, sizeof(char));
  char v[] = {'a','A','e','E','i','I','o','O','u','U','\0'};
  char *vowels;
  vowels = v;

  //Checks to see if the string contains anything.
  if (len <= 0) {
    return str;
  }

  /*The actual disemvowel process. It will loop
  through the given string, compare that character
  with the vowels, and add it to tmp if it's not
  a vowel.*/
  for (i=0; i<len; i++) {
    for (j=0; j<10; j++) {
      if (str[i] != vowels[j]) {
	  tmp[x] = str[i];
	  printf("%d ", str[i]);
	  x++;
      }
    }
  }

  /*Creates a new array named result that is
  significantly smaller than tmp, but contains
  the same amount of data.*/
  result = (char*) calloc(x+1, sizeof(char));
  for (i=0; i<x; i++) {
    result[i] = tmp[i];
  }
  result[x] = '\0';

  free(tmp);
  free(vowels);
  return result;
}
