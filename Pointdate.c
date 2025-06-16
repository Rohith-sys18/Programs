#include <stdio.h>
#include <time.h>
int main() {
    time_t t;
    struct tm *tm_info;
    char buffer[80];
    time(&t);
    tm_info = localtime(&t);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d", tm_info);
    printf("Formatted date: %s\n", buffer);

    return 0;
}

