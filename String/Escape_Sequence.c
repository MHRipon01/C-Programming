#include <stdio.h>

int main()
{

    char str[] = "bangladesh is a \"beautiful\" country. ";
    puts(str);

    char str2[] = "bangladesh \nis a \"beautiful\" country.";
    puts(str2);
    return 0;
}

// \n for new line
// \""\ for quotation
// \0 null character.(compiler stops reading string)
//  \\ for backslash(\)