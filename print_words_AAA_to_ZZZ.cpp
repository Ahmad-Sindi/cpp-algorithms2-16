/* Algorithm Challenge & Problem Solving
 * 16 - Print All Words From AAA to ZZZ
 *
 * This simplified version directly prints each 3-letter combination
 * without needing a string accumulator.
 */

#include <iostream>
using namespace std;

void PrintWordsFromAAAtoZZZ()
{
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char z = 'A'; z <= 'Z'; z++)
            {
                cout << i << j << z << endl; // Directly print the 3-letter word
            }
        }
    }
}

int main()
{
    PrintWordsFromAAAtoZZZ();
    return 0;
}
