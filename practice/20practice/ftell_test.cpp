#include<stdio.h>

int main ()
{
	FILE * fp;
	long pos, count;

	fp = fopen("image_data.txt", "r");
	
	fseek(fp, 0L, SEEK_END);
	pos = ftell(fp);
	fseek(fp, 0L, SEEK_SET);

	printf("The position is %ld \n", pos);

	unsigned char result[pos];
	count = fread(result, sizeof(unsigned char),pos,fp);
	printf("Read %ld unsigned char\n", count);
	

	return 0;
}
