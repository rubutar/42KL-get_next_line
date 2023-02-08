#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
	int fd[4];
	char *buff;

	fd[0] = open("files/41_with_nl", O_RDWR);
	buff = get_next_line(1000);
	buff = get_next_line(fd[0]);
	printf("result : %s\nexpected : 0123456789012345678901234567890123456789\n", buff);
	buff = get_next_line(1003);
	buff = get_next_line(fd[0]);
	printf("result : %s\nexpected : 0\n", buff);



	fd[1] = open("files/big_line_with_nl", O_RDWR);
	fd[2] = open("files/43_with_nl", O_RDWR);
	fd[3] = open("files/nl", O_RDWR);


	return (0);
}