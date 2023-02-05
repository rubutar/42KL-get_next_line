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

			printf("opening file = %s\n", argv[i]);
			printf("fd = %d\n", fd);
			printf("Buffer_size = %d\n", BUFFER_SIZE);
			printf("result : %s\n\n", buff);
		}
	}
	if (argc == 1)
	{
			printf("fd = %d\n", fd);
			printf("Buffer_size = %d\n", BUFFER_SIZE);
			printf("buffer : %s\n", buff);
			printf("no file to be opened");

	}
	return (0);
}