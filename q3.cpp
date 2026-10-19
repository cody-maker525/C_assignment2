#include <iostream>
using namespace std;

int indexOf(char c, const char *str)
{
    int count = 0;
    while (str[count] != c)
    {
        if (str[count] == '\0')
        {
            return -1;
        }
        count++;
    }
    return count;
}
main()
{
    char c;
    char str[100];
    cout << "Enter a character" << endl;
    cin >> c;
    cin.ignore();

    cout << "Enter a string" << endl;
    cin.getline(str, 100);

    cout << "Index of characater " << c << " = " << indexOf(c, str) << endl;
}