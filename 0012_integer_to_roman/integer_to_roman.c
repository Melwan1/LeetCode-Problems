#include <stdlib.h>

char *intToRomanRec(int num, char **result, int length) {
    if (num >= 1000)
    {
        (*result)[length] = 'M';
        return intToRomanRec(num - 1000, result, length + 1);
    }
    if (num >= 900)
    {
        (*result)[length] = 'C';
        (*result)[length + 1] = 'M';
        return intToRomanRec(num - 900, result, length + 2);
    } 
    if (num >= 500)
    {
        (*result)[length] = 'D';
        return intToRomanRec(num - 500, result, length + 1);
    }
    if (num >= 400)
    {
        (*result)[length] = 'C';
        (*result)[length + 1] = 'D';
        return intToRomanRec(num - 400, result, length + 2);
    }
    if (num >= 100)
    {
        (*result)[length] = 'C';
        return intToRomanRec(num - 100, result, length + 1);
    }
    if (num >= 90)
    {
        (*result)[length] = 'X';
        (*result)[length + 1] = 'C';
        return intToRomanRec(num - 90, result, length + 2);
    }
    if (num >= 50)
    {
        (*result)[length] = 'L';
        return intToRomanRec(num - 50, result, length + 1);
    }
    if (num >= 40)
    {
        (*result)[length] = 'X';
        (*result)[length + 1] = 'L';
        return intToRomanRec(num - 40, result, length + 2);
    }
    if (num >= 10)
    {
        (*result)[length] = 'X';
        return intToRomanRec(num - 10, result, length + 1);
    }
    if (num == 9)
    {
        (*result)[length] = 'I';
        (*result)[length + 1] = 'X';
        return intToRomanRec(num - 9, result, length + 2);
    }
    if (num >= 5)
    {
        (*result)[length] = 'V';
        return intToRomanRec(num - 5, result, length + 1);
    }
    if (num == 4)
    {
        (*result)[length] = 'I';
        (*result)[length + 1] = 'V';
        return intToRomanRec(num - 4, result, length + 2);
    }
    if (num >= 1)
    {
        (*result)[length]= 'I';
        return intToRomanRec(num - 1, result, length + 1);
    }
    return *result;
}

char* intToRoman(int num) {
    // the maximum length of the result string is reached when num = 3888.
    // The string is then MMMDCCCLXXXVIII, which has a length of 15.
    // So we know every result has a length of at most 16, including the
    // null terminating character.

    char *result = calloc(16, 1);
    return intToRomanRec(num, &result, 0);
}
