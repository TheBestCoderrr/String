#include <string.h>

int CountSymbolsInString(char StrArr[], char Pattern[]) {
    unsigned short int CountSymbols = 0;

    for (int i = 0; i < strlen(StrArr); i++) {
        for (int j = 0; j < strlen(Pattern); j++) {
            if (StrArr[i] == Pattern[j])
                CountSymbols++;
        }
    }

    return CountSymbols;
}