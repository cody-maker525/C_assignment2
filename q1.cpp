#include <iostream>
using namespace std;

unsigned int length(const char *str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}
main()
{
    char in[100];
    char *str = in;
    cin.getline(str, 100);
    cout << "Length = " << length(in) << endl;
}