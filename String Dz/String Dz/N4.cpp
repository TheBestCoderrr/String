#include <iostream>
#include <string.h>

using namespace std;

void InitZerkalStr(char StrArr[], char StrRight[]) {
    for (int i = 0, j = strlen(StrArr) - 1; i < strlen(StrArr); i++, j--)
        StrRight[i] = StrArr[j];
    StrRight[strlen(StrArr)] = '\0';
}

void PrintPalindrom(char StrLeft[], char StrRight[]) {
    if (strcmp(StrLeft, StrRight))
        cout << "Not Palindrom" << endl;
    else
        cout << "Palindrom" << endl;
}