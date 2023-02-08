#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
	int fd[2];
	char *buff;


	fd[0] = open("files/multiple_line_with_nl", O_RDWR);
	fd[1] = open("files/nl", O_RDWR);



	buff = get_next_line(fd[0]);
	printf("fd = %d\n", fd[0]);
	printf("Buffer_size = %d\n", BUFFER_SIZE);
	printf("result : %s\n\n", buff);

	buff = get_next_line(fd[1]);
	printf("fd = %d\n", fd[1]);
	printf("Buffer_size = %d\n", BUFFER_SIZE);
	printf("result : %s\n\n", buff);

	buff = get_next_line(fd[0]);
	printf("fd = %d\n", fd[0]);
	printf("Buffer_size = %d\n", BUFFER_SIZE);
	printf("result : %s\n\n", buff);

	buff = get_next_line(fd[1]);
	printf("fd = %d\n", fd[1]);
	printf("Buffer_size = %d\n", BUFFER_SIZE);
	printf("result : %s\n\n", buff);

	buff = get_next_line(fd[0]);
	printf("fd = %d\n", fd[0]);
	printf("Buffer_size = %d\n", BUFFER_SIZE);
	printf("result : %s\n\n", buff);


	return (0);
}