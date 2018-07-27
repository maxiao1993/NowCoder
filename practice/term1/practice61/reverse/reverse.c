


#include<stdio.h>
#include<stdlib.h>

void reverse_string(char * str);

int
main(void)
{
	char a[] = "abcdefg";
	
	reverse_string(a);
	puts(a);

	return 0;

}


void
reverse_string(char * str)
{
	char * last_char;

	/*
	 *	把last_char设置为指向字符串的最后一个字符。
	 */
	for(last_char = str ; *last_char != '\0' ; last_char++)
		;
	last_char--;

	/*
	 *	交换str和last_char指向的字符，然后str向前进一步，last_char向后
	 *	退一步，在两个指针相逢或擦肩而过之前重复这个过程。
	 */
	while( str < last_char)
	{
		char temp;

		temp = *str;
		*str++ = *last_char;
		*last_char-- = temp;
	}
}
