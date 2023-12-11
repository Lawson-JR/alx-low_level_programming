#include "main.h"
#include <unistd.h>
#include <limits.h>
#include <string.h>

int _putchar(char c) {
    // Implementation of _putchar
    // ...
    return write(1, &c, 1);
}

int _islower(int c) {
    // Implementation of _islower
    // ...
    if (c >= 'a' && c <= 'z') {
        return 1; // c is lowercase
    }
    return 0; // c is not lowercase
}

int _isalpha(int c) {
    // Implementation of _isalpha
    // ...
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; // c is an alphabetic character
    }
    return 0; // c is not an alphabetic character
}

int _abs(int n) {
    // Implementation of _abs
    // ...
    if (n < 0) {
        return -n; // Return the negation of n to get the absolute value
    }
    return n; // n is already positive or zero, so return as is
}

int _isupper(int c) {
    // Implementation of _isupper
    // ...
    if (c >= 'A' && c <= 'Z') {
        return 1; // c is uppercase
    }
    return 0; // c is not uppercase
}

int _isdigit(int c) {
    // Implementation of _isdigit
    // ...
    if (c >= 0 && c <= 9) {
        return 1; // c is a digit
    }
    return 0; // c is not a digit	
}

int _strlen(char *s) {
    // Implementation of _strlen
    // ...
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

void _puts(char *s) {
    // Implementation of _puts
    // ...
    while (*s != '\0') {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    // Implementation of _strcpy
    // ...
     char *originalDest = dest; // Store the original pointer to dest

    while (*src != '\0') {
        *dest = *src; // Copy the character from src to dest
        dest++;
        src++;
    }

    *dest = '\0'; // Add the terminating null byte to dest
}

int _atoi(char *s) {
    // Implementation of _atoi
    // ...
    int sign = 1; // Initialize sign to positive
    int result = 0;

    // Skip any leading white spaces
    while (*s == ' ') {
        s++;
    }

    // Check for optional sign
    if (*s == '-' || *s == '+') {
        if (*s == '-') {
            sign = -1; // Update sign to negative
        }
        s++;
    }

    // Convert the remaining digits to an integer
    while (*s >= '0' && *s <= '9') {
        int digit = *s - '0'; // Convert character to integer
        // Check for potential overflow
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
            // Handle overflow by returning the maximum or minimum value of int based on the sign
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        result = result * 10 + digit;
        s++;
    }

    return result * sign; // Apply the sign to the final result
}

char *_strcat(char *dest, char *src) {
    // Implementation of _strcat
    // ...
    char *originalDest = dest; // Store the original pointer to dest

    // Move the pointer dest to the end of the string
    while (*dest != '\0') {
        dest++;
    }

    // Append the characters of src to dest
    while (*src != '\0') {
        *dest = *src; // Copy the character from src to dest
        dest++;
        src++;
    }

    *dest = '\0'; // Add the terminating null byte to dest

    return originalDest; // Return the pointer to dest
}

char *_strncat(char *dest, char *src, int n) {
    // Implementation of _strncat
    // ...
        char *originalDest = dest; // Store the original pointer to dest

    // Move the pointer dest to the end of the string
    while (*dest != '\0') {
        dest++;
    }

    // Append at most n characters from src to dest
    while (*src != '\0' && n > 0) {
        *dest = *src; // Copy the character from src to dest
        dest++;
        src++;
        n--;
    }

    *dest = '\0'; // Add the terminating null byte to dest

    return originalDest; // Return the pointer to dest
}

char *_strncpy(char *dest, char *src, int n) {
    // Implementation of _strncpy
    // ...
     char *originalDest = dest; // Store the original pointer to dest

    // Copy at most n characters from src to dest
    while (*src != '\0' && n > 0) {
        *dest = *src; // Copy the character from src to dest
        dest++;
        src++;
        n--;
    }

    // Pad dest with null bytes if necessary
    while (n > 0) {
        *dest = '\0'; // Add null bytes to dest
        dest++;
        n--;
    }

    return originalDest; // Return the pointer to dest
}

int _strcmp(char *s1, char *s2) {
    // Implementation of _strcmp
    // ...
    while (*s1 != '\0' || *s2 != '\0') {
        if (*s1 != *s2) {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }

    return 0; // Both strings are equal
}

char *_memset(char *s, char b, unsigned int n) {
    // Implementation of _memset
    // ...
    char *originalS = s; // Store the original pointer to s

    // Fill the memory area pointed to by s with the constant byte b
    while (n > 0) {
        *s = b; // Assign the value b to the current byte
        s++;
        n--;
    }

    return originalS; // Return the pointer to s
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    // Implementation of _memcpy
    // ...
    char *originalDest = dest; // Store the original pointer to dest

    // Copy n bytes from src to dest
    while (n > 0) {
        *dest = *src; // Copy the byte from src to dest
        dest++;
        src++;
        n--;
    }

    return originalDest; // Return the pointer to dest
}

char *_strchr(char *s, char c) {
    // Implementation of _strchr
    // ...
    while (*s != '\0') {
        if (*s == c) {
            return s; // Return the pointer to the first occurrence of c in s
        }
        s++;
    }

    return NULL; // Return NULL if the character is not found
}

unsigned int _strspn(char *s, char *accept) {
    // Implementation of _strspn
    // ...
    unsigned int count = 0;

    while (*s != '\0' && strchr(accept, *s) != NULL) {
        count++;
        s++;
    }

    return count;
}

char *_strpbrk(char *s, char *accept) {
    // Implementation of _strpbrk
    // ...
    while (*s != '\0') {
        if (strchr(accept, *s) != NULL) {
            return s; // Return the pointer to the byte in s that matches one of the bytes in accept
        }
        s++;
    }

    return NULL; // Return NULL if no such byte is found
}

char *_strstr(char *haystack, char *needle) {
    // Implementation of _strstr
    // ...
    if (*needle == '\0') {
        return haystack; // Return haystack if needle is an empty string
    }

    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }

        if (*n == '\0') {
            return haystack; // Return the pointer to the beginning of the located substring
        }

        haystack++;
    }

    return NULL; // Return NULL if the substring is not found
}
