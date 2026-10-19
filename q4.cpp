#include <iostream>
using namespace std;

char *substring(int i, int j, const char *str)
{
    if (i > j)
    {
        return NULL;
    }
    char *result = new char[j - i + 1];
    int count = 0;

    while (i < j)
    {
        if (i < 0 || i >= j || str[i] == '\0' || str[j] == '\0')
        {
            return NULL;
        }
        result[count] = str[i];
        count++;
        i++;
    }
    result[count] = '\0';
    return result;
}
main()
{
    int i;
    int j;
    char str[100];
    cout << "Enter a string" << endl;
    cin.getline(str, 100);
    cout << "Enter 2 numbers, one lower than the next" << endl;
    cin >> i;
    cin >> j;
    char *res = substring(i, j, str);
    if (res == NULL)
    {
        cout << "The substring of index " << i << " and " << j << " is NULL" << endl;
    }
    else
    {
        cout << "The substring of index " << i << " and " << j << " is " << substring(i, j, str) << endl;
    }
}