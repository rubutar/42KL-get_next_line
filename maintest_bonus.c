#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int fd;
	char *buff;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDWR);
		buff = get_next_line(fd);
		printf("%d\n", fd);

		printf("%s", buff);
		
	}
	if (argc == 1)
	{
		printf("input a value");

	}
	return (0);
}