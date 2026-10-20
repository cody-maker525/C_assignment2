#include <iostream>
using namespace std;

// author
char *replace(char c, char p, const char *str)
{
    int count = 0;
    while (str[count] != '\0') // find length for new array size
    {
        count++;
    }
    char *rep = new char[count + 1]; // new array +1 for null ('\0');

    count = 0;
    while (str[count] != '\0')
    {
        if (str[count] == c) // if letter is equal to c, put it equal to the char p in array rep
        {
            rep[count] = p;
        }
        else
        {
            rep[count] = str[count]; // else, add that letter into the rep char
        }
        count++; // keep counting for array incrementation
    }
    rep[count] = '\0';
    return rep;
}
//[function]_name_test_case_[k]

void replace_test_case_1()
{
    char *r = replace('i', 'p', "string");
    cout << "Expected: strpng" << endl;
    cout << "Actual: " << r << endl;

    delete[] r; // delete after so you can resuse r
}

void replace_test_case_2()
{
    char *r = replace('s', 'e', "sstss");
    cout << "Expected: eetee" << endl;
    cout << "Actual: " << r << endl;

    delete[] r; // delete after so you can resuse r
}
void replace_test_case_3()
{
    char *r = replace('t', 'l', "sing");
    cout << "Expected: sing" << endl;
    cout << "Actual: " << r << endl;

    delete[] r; // delete after so you can resuse r
}

main()
{
    replace_test_case_1();
    replace_test_case_2();
    replace_test_case_3();
}
