#include <iostream>
using namespace std;

char *replace(char c, char p, const char *str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    char *rep = new char[count + 1];

    count = 0;
    while (str[count] != '\0')
    {
        if (str[count] == c)
        {
            rep[count] = p;
        }
        else
        {
            rep[count] = str[count];
        }
        count++;
    }
    rep[count] = '\0';
    return rep;
}
main()
{
    char c;
    char p;
    char str[100];

    cout << "Enter a string" << endl;
    cin.getline(str, 100);

    cout << "The original letter is " << endl;
    cin >> c;
    cout << "The replacement letter is " << endl;
    cin >> p;

    cout << "The original string is " << str << ", the original letter is "
         << c << ". The replacement letter is " << p << ". The final string is "
         << replace(c, p, str) << endl;
}