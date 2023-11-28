#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <elf.h>

void check_elf(unsigned char *_e_ident);
void print_magic(unsigned char *_e_ident);
void print_class(unsigned char *_e_ident);
void print_data(unsigned char *_e_ident);
void print_version(unsigned char *_e_ident);
void print_os(unsigned char *_e_ident);
void print_osabi(unsigned char *_e_ident);
void print_type(unsigned int _e_type, unsigned char *_e_ident);
void print_entry(unsigned long int _e_entry, unsigned char *_e_ident);
void close_elf(int _elf);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
