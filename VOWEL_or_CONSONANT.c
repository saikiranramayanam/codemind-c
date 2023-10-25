#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if (ch>=65 && ch<=90)
	ch+=32;
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("VOWEL");
	else
	printf("CONSONANT");
}