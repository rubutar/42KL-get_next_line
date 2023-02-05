#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int fd;
	char *buff;

	if (argc >= 2)
	{
		for (int i = 1; i <= argc - 1 ;i++)
		{
			fd = open(argv[i], O_RDWR);
			buff = get_next_line(fd);
			printf("%d\n", fd);

			printf("%s", buff);
		}
	}
	if (argc == 1)
	{
		printf("input a value");

	}
	return (0);
}