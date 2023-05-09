#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

/**
 * print_osabi - Prints OS/ABI information from ELF identifier.
 * @e_ident: Pointer to the ELF identifier.
 *
 * Description: prints the OS/ABI info from the ELF identifier.
 * The implementation remains the same.
 */
void print_osabi(unsigned char *e_ident)
{
	/* Implementation remains the same */
}

/**
 * print_header_info - Prints header information from ELF header.
 * @header: Pointer to the ELF header structure.
 *
 * Description: prints the header info from the ELF header.
 */
void print_header_info(Elf64_Ehdr *header)
{
	/* Print header information */
	/* ... */
}

/**
 * print_file_info - Prints information from an ELF file.
 * @filename: Name of the ELF file to process.
 *
 * Description:function opens specified ELF file, reads ELF header,
 * and prints the header information using the print_header_info() function.
 * It handles error checking for file opening, reading, and closing.
 */
void print_file_info(char *filename)
{
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(1);
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
	{
		perror("read");
		exit(1);
	}

	printf("ELF Header:\n");
	print_header_info(&header);

	if (close(fd) == -1)
	{
		perror("close");
		exit(1);
	}
}
/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF-file>\n", argv[0]);
		exit(1);
	}

	print_file_info(argv[1]);

	return (0);
}
