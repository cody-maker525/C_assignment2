#include <iostream>
using namespace std;
char *copy(char *dest, const char *src)
{
    int count = 0;
    while (src[count] != '\0')
    {
        if (dest[count] == '\0')
        {
            return NULL;
        }
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return dest;
}

int main()
{
    char dest[100];
    char src[100];

    cout << "Enter original string want to copy" << endl;
    cin.getline(src, 100);
    cout << "Enter destination string" << endl;
    cin.getline(dest, 100);
    char *res = copy(dest, src);
    if (res == NULL)
    {
        cout << "Copy = NULL" << endl;
    }
    else
    {
        cout << "Copy = " << copy(dest, src) << endl;
    }
    return 0;
}