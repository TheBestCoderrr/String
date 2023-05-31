#include <string.h>

int CountWords(char StrArr[]) {
    unsigned short int CountWords = 0;

    char Pattern[] = { " ,./!@#$%^&*()[]{}:;|?<>\"\'\\" };
    char* Word;
    char* NextStr = NULL;

    Word = strtok_s(StrArr, Pattern, &NextStr);

    do
    {
        Word = strtok_s(NULL, Pattern, &NextStr);
        CountWords++;
    } while (Word != NULL);

    return CountWords;
}