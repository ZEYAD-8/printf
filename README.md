# printf:tada:

## Description:page_facing_up:

---

[![printf.jpg](https://i.postimg.cc/QtBH3tmV/printf.jpg)](https://postimg.cc/S2hyLmwp)

The printf function sends formatted output to stdout.
A custom \_printf() for learning purposes was developed by cohort #15 student taking ALX software engineerging program.

\_printf() function format string is a character string, beginning and ending in its initial shift state, if any.
These arguments are placed using the percentage '%' operator.

---

### Resources

[printf format identifiers](https://www.lix.polytechnique.fr/~liberti/public/computing/prog/c/C/FUNCTIONS/format.html#period)

---

#### Authorized functions and macros

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

---

#### Compilation:alembic:

The code must be compiled this way:

**$ gcc -Wall -Werror -Wextra -pedantic \*.c**

---

#### Use & Examples

---

**Prototype:** int \_printf(const char \*format, ...);
**Use - General:** \_printf("format string", var1, var2, ...);

**Examples:**

- Basic String: \_printf("%s Alx", "Hello");`

  - Output: Hello Alx

- Print integers: \_printf("This is an array element: arr[%d]:%c", 32, arr[32]);`
  - Output: This is an array element arr[32]:A

Many other specifiers and flags were added and by combinig those the \_printf() function generate a different ouput. The following list are the specifiers and flags allowed.

---

#### Use & Examples

---

###### Specifiers

| Specifier  | Output                                              | Examples    |
| ---------- | --------------------------------------------------- | ----------- |
| `c`        | Character                                           | y           |
| `d` or `i` | Signed integer                                      | 1024, -1024 |
| `s`        | String of characters                                | Hello Alx   |
| `b`        | Binary Representation of unsigned integer           | 01010110    |
| `u`        | Unsigned integer                                    | 1024        |
| `o`        | Unsigned octal                                      | 432         |
| `x`        | Unsigned hexadecimal integer                        | 3ca         |
| `X`        | Unsigned hexadecimal integer (uppercase)            | 3CA         |
| `S`        | String with hex-ascii value replacing special chars | \x0A\x0A    |
| `p`        | Pointer address                                     | 0x403212    |
| `r`        | Reversed string of characters                       | dlroW olleH |
| `R`        | ROT13 Translation of string                         | Uryyb       |

---

#### Files contained in this repository

---

| Name                   | Information                                                                                  | Relevant Files                |
| ---------------------- | -------------------------------------------------------------------------------------------- | ----------------------------- |
| `man_3_printf`         | Man page of the \_printf() function.                                                         | `None`                        |
| `main.h`               | Header file with the data type struct, standard libraries and custom prototypes.             | `*.c compilation`             |
| `_printf.c`            | Main printf function file. Calls other functions.                                            | `printf_(name of var).c file` |
| `print_Percent.c`      | Contains percentage print function.                                                          | `None`                        |
| `print_Integer.c`      | Contains decimal and integer functions.                                                      | `None`                        |
| `print_Char.c`         | Custom function for char data type.                                                          | `None`                        |
| `print_String.c`       | Function that calls string type variable.                                                    | `None`                        |
| `print_Binary.c`       | Function that gets the binary                                                                | `None`                        |
| `print_Octal.c`        | Functions that returns octal number.                                                         | `None`                        |
| `print_hex.c`          | Calls hexadecimal numbers (lowercase).                                                       | `None`                        |
| `print_HEX.c`          | Calls hexadecimal numbers (Uppercase).                                                       | `None`                        |
| `print_Unsigned.c`     | Returns an unisgined data type.                                                              | `None`                        |
| `print_CustomString.c` | Returns a string and non readable characters are printed in hexadecimal numbers (Lowercase). | `None`                        |
| `print_Reverse.c`      | Returns a string in reverse.                                                                 | `None`                        |
| `print_ROT13.c`        | Returns a string in Rot13.                                                                   | `None`                        |
| `_putchar.c`           | Custom putchar function.                                                                     | `None`                        |

---

## Tasks required for this project

---

0. ###### I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life1.
   Write a function that produces output according to a format.
   Handle the following conversion specifiers:

- c
- s
- %

1. ###### Education is when you read the fine print. Experience is what you get if you dont
   Handle the following conversion specifiers:

- d
- i

2. ###### Just because its in print doesn't mean its the gospel

   Create a man page for the function.

3. ###### With a face like mine, I do better in print
   Handle the following conversion specifiers:

- b

4. ###### What one has not experienced, one will never understand in print
   Handle the following conversion specifiers:

- u
- x
- o
- x
- X

5. ###### Nothing in fine print is ever good news

   Use a local buffer of 1024 chars in order to call write as little as possible. (not done)

6. ###### Handle the following custom conversion specifier

- S : prints the string.
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

7. ###### How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print

   Handle the following conversion specifier: p

8. ###### The big print gives and the small print takes away
   Handle the following flag characters for non-custom conversion specifiers: (not done)

- ´+´
- space
- ´#´

9. ###### Sarcasm is lost in print
   Handle the following length modifiers for non-custom conversion specifiers: (not done)

- l
- h
  Conversion specifiers to handle: d, i, u, o, x, X

10. ###### Print some money and give it to us for the rain forests

    Handle the field width for non-custom conversion specifiers. (not done)

11. ###### The negative is the equivalent of the composer's score, and the print the performance

    Handle the precision for non-custom conversion specifiers. (not done)

12. ###### It's depressing when you're still around and your albums are out of print

    Handle the 0 flag character for non-custom conversion specifiers. (not done)

13. ###### Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection

    Handle the - flag character for non-custom conversion specifiers. (not done)

14. ###### Print is the sharpest and the strongest weapon of our party
    Handle the following custom conversion specifier:

- r : prints the reversed string

15. ###### [The flood of print has turned reading into a process of gulping rather than savoring]
    Handle the following custom conversion specifier:

- R: prints the rot13'ed string

16. ###### \*
    All the above options work well together. (not done)

## Authors &copy;

- [Zeyad Elnaggar](https://github.com/ZEYAD-8/)
- [Yousif Abozid](https://github.com/YousifAbozid/)
