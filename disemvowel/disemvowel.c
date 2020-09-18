#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  int len, i, j, x;
  x=0;
  len = strlen(str);
  char *result;
  char *tmp;
  tmp = (char*) calloc(50000, sizeof(char));

  //Checks to see if the string contains anything.
  if (len <= 0) {
    return str;
  }

  //The actual disemvowel process. It will loop
  //through the given string, see if that character
  //is a vowel, and add it to tmp if it's not
  //a vowel.
  for (i=0; i<len; i++) {
      if (str[i] == is_a_vowel(str[i])) {
	  tmp[x] = str[i];
	  x++;
      }
  }

  //Creates a new array named result that is
  //significantly smaller than tmp, but contains
  //the same amount of data.
  result = (char*) calloc(x+1, sizeof(char));
  for (i=0; i<=x; i++) {
    result[i] = tmp[i];
  }
  result[x+1] = '\0';

  free(tmp);
  //free(vowels);
  return result;
}

char *is_a_vowel(char *str) {
  char v[] = {'a','A','e','E','i','I','o','O','u','U'};
  char *vowels;
  vowels = v;
  char *result;

  //Yes, this is inefficient, but I don't know how else to do this
  for (i=0; i<10; i++) {
    if (vowels[i] != str[0]) {
    result[0] = str[0];
    }
  }

  return result;
}
