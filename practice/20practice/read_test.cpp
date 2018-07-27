#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int fd;
	off_t pos;
	long count;

	if ((fd = open("image_data.txt", O_RDONLY)) < 0)
		exit(1);
	pos = lseek(fd, 0, SEEK_END);
	lseek(fd,0,SEEK_SET);

	printf("The position is %ld \n", pos);
	
	unsigned char result[pos];
	if ((count = read(fd, result, pos)) < 0)
		exit(1);
	printf("The count is %ld\n", count);

	return 0;
}
