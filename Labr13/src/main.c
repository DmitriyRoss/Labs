/** Lab 13 
 * \author Rossiyskiy D.
 * \version 1.0
 * \brief Function that counts each symbol in a string 
 * 
 * 
 * 
 * 
 * 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/// Frequency table row
struct counter_pair
{
    int symbol_code;  // Symbol code
    int symbol_count; // How many times symbol was met
};

/// A function that compares two rows of a table
int compar(const void *a, const void *b)
{
    struct counter_pair *p1 = (struct counter_pair *)a;
    struct counter_pair *p2 = (struct counter_pair *)b;

    if (p1->symbol_count < p2->symbol_count)
        return -1;
    else if (p1->symbol_count > p2->symbol_count)
        return 1;
    else
        return 0;
}

/// The main function of the program
int main()
{
    ///Character count table
    struct counter_pair cp[256];
    char str[1024]; // The processed string
    char *rc;       // The pointer that will return fgets
    int j, len;

    // Scoring table loop
    for (j = 0; j < 256; j++)
    {
        cp[j].symbol_code = j;  //  "j" code symbol counter
        cp[j].symbol_count = 0; // symbol is not met
    }

    // Processing the entered string
    printf("Enter your text: ");
    rc = fgets(str, 1023, stdin);
    if (rc != str)
    {
        printf("Error: not a string\n");
        return -1;
    }
    // Counting symbols
    len = strlen(str);
    for (j = 0; j < len; j++)
        cp[str[j]].symbol_count += 1;

    /// Printing a result
    printf("Frequency table row\n");

    for (j = 0; j < 256; j++)
    {
        if (cp[j].symbol_count == 0)
            continue;
        printf("Символ %c встречается %d раз\n", cp[j].symbol_code, cp[j].symbol_count);
    }
}