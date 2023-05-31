#include <iostream>
#include <string.h>

#include "N1.h"
#include "N2.h"
#include "N3.h"
#include "N4.h"

#define LENSTR 100

using namespace std;

void CinText(char StrArr[]) {
    cout << "Enter Text: ";
    cin.getline(StrArr, LENSTR);
}

int main() {
    char str[LENSTR];

    cout << "N1" << endl;

    CinText(str);

    Tabulation(str);

    cout << str << endl;



    cout << "\nN2" << endl;

    char PatternLetters[] = { "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM" };
    char PatternNums[] = { "1234567890" };
    char PatternPunctuation[] = { "!@#$%^&*()_-=+/?.,<>|[]{}`~:;\'\"\\" };

    CinText(str);

    cout << "Count Lettets = " << CountSymbolsInString(str, PatternLetters) << endl;
    cout << "Count Nums = " << CountSymbolsInString(str, PatternNums) << endl;
    cout << "Count Punctuation = " << CountSymbolsInString(str, PatternPunctuation) << endl;



    cout << "\nN3" << endl;

    CinText(str);

    cout << "Count Words = " << CountWords(str) << endl;



    cout << "\nN4" << endl;

    CinText(str);

    char StrLeft[LENSTR], StrRight[LENSTR];

    strcpy_s(StrLeft, str);
    InitZerkalStr(str, StrRight);

    PrintPalindrom(StrLeft, StrRight);
}
