#include <stdio.h>
#include <string.h>

int main() {
	
	int vowels = 0;
	int consonants = 0;
	char s[1000];
	
	printf("Enter the string: ");
	gets(s);
	
	int i;
	for(i = 0; s[i]; i++) {
		if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)) {
			if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
			vowels++;
			else 
			consonants++;
		}
		
	}
	printf("Vowel = %d\n", vowels);
	printf("Consonants = %d\n", consonants);
}
