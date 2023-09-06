#include <stdio.h>
#include <string.h>

void timeConversion(char s[]) {
    int hh, mm, ss;
    char ampm[3];

    sscanf(s, "%d:%d:%d%s", &hh, &mm, &ss, ampm);

    if (strcmp(ampm, "PM") == 0 && hh != 12) {
        hh += 12;
    } else if (strcmp(ampm, "AM") == 0 && hh == 12) {
        hh = 0;
    }

    printf("%02d:%02d:%02d\n", hh, mm, ss);
}

int main() {
    char s[11];  // Assuming the input time format is hh:mm:ssAM or hh:mm:ssPM
    scanf("%s", s);

    timeConversion(s);

    return 0;
}
