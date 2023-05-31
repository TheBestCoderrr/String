#include <string.h>

void Tabulation(char StrArr[]) {
    for (int i = 0; i < strlen(StrArr); i++) {
        if (StrArr[i] == ' ') {
            StrArr[i] = '\t';
        }
    }
}