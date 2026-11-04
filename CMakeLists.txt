cmake_minimum_required(VERSION 4.3)
project(42Cursus C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(42Cursus
        ft_atoi.c
        ft_isalnum.c
        ft_isalpha.c
        ft_isascii.c
        ft_isdigit.c
        ft_isprint.c
        ft_strlcpy.c
        ft_strlen.c
        ft_strncmp.c
        ft_strnstr.c
        ft_strrchr.c
        ft_tolower.c
        ft_toupper.c
        libft.h
        main.c)
