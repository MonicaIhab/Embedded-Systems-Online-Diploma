#include<stdio.h>
#include<string.h>

int main() {
  char character;
  int lowercase_vowel, uppercase_vowel;
  printf("Enter an alphabet: ");
  fflush(stdout);
  scanf("%c", &character);

  lowercase_vowel = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');
  uppercase_vowel = (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');

  if (lowercase_vowel || uppercase_vowel)
	  printf("%c is a vowel.", character);
  else
	  printf("%c is a consonant.", character);

  return 0;

}
