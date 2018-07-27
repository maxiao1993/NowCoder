#include<string.h>
#include<stdlib.h>

int
lookup_keyword( char const * const desired_word,
		char const * keyword_table[])
{
	char const **kwp;

	//for every word in the table...
	for(kwp = keyword_table; *kwp != NULL; kwp++)
		//if this word matches the one we look up,return the positon.
		if( strcmp( desired_word, *kwp) == 0)
			return kwp - keyword_table;
	//if don't find , return -1.
	return -1;

}

int 
main(void)
{
	char const * keyword[] = {
		"do",
		"for",
		"if",
		"register",
		"return",
		"switch",
		"while",
		NULL
	};
}
