#include <iostream>
using namespace std;

/*
author: clodagh kelly
explanation: start int count = 0, increment it in the while loop while the char it is on in str
is not the null char. this is to find the length. make a new char array of length of str just found using count
and then + 1 for the null char at end as it stops before it counts the null char.
put count as 0 again, if letter is equal to char c, put p in that position.
else, add the current letter to that position.
replace takes in char c, char p, const char *str
returns replaced string with any char c before now char p
test cases:
test 1: normal string normal chars
arguments: c = 'i', p = 'p', str = "string"
returns: nothing, prints expected "strpng" and the actual result "strpng"

test 2: multiple of the same chars
arguments: c = 's', p = 'e', str = "sstss"
returns: nothing, prints expected "eetee" and the actual result "eetee"

test 3: no char c in string, return string
arguments: c = 't', p = 'l', str = "sing"
returns: nothing, prints expected "sing" and the actual result "sing"
*/

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

void replace_test_case_1()
{
    char *r = replace('i', 'p', "string");
    cout << "Expected: strpng" << endl;
    cout << "Actual: " << r << endl;
}

void replace_test_case_2()
{
    char *r = replace('s', 'e', "sstss");
    cout << "Expected: eetee" << endl;
    cout << "Actual: " << r << endl;
}
void replace_test_case_3()
{
    char *r = replace('t', 'l', "sing");
    cout << "Expected: sing" << endl;
    if (r == NULL)
    {
        cout << "Actual: NULL" << endl;
    }
    else
    {
        cout << "Actual: " << r << endl;
    }
}

main()
{
    replace_test_case_1();
    replace_test_case_2();
    replace_test_case_3();
}
