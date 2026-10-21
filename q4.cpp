#include <iostream>
using namespace std;

/*
name: Clodagh Kelly
explanation: create a char array with the function substring. in substring, if i>j then return null, create a
new char array of length (j-i) to find the difference and then +1 for the null character '\0'. while i is less than
j, if i or j is less than 0, the character is the null character(means the word is too short for substring i and j
values) then return null, otherwise loop through the new character from count = 0 and incremenet it. then keep incrementing i
until it is equal to j then it pops out of the while loop, null character is added and returned.
substring takes in int i, int j, const char* str
returns result char array of a substring between i and j
test cases:
test 1: normal word, valid i and j
arguments: i = 1, j = 5, str = "deodorant"
returns: nothing, prints expected "eodor" and the actual result "eodor"

test 2: j is out of bounds: returns null
arguments: i = 5, j = 2, str = "truthe"
returns: nothing, prints the actual result NULL

test 3: i>j return null
arguments: i = 0, j = 6, str = "Soap"
returns: nothing, prints expected NULL and the actual result NULL

test 4: tests negative i: null
arguments: i = -1, j = 8, str = "Soap"
returns: nothing, prints expected NULL and the actual result NULL

test 5: tests negative j: null
arguments: i = 1, j = -8, str = "Soap"
returns: nothing, prints expected NULL and the actual result NULL
*/

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
        if (i < 0 || j < 0 || i >= j || str[i] == '\0' || str[j] == '\0')
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
void substring_test_case_1()
{
    char *r = substring(1, 5, "deodorant"); // tests normal word, follows all rules
    cout << "Expected: eodor" << endl;
    if (r == NULL)
    {
        cout << "Actual: NULL" << endl;
    }
    else
    {
        cout << "Actual: " << r << endl;
    }
}

void substring_test_case_2()
{
    char *r = substring(5, 2, "truthe"); // test i>j,should return null
    if (r == NULL)
    {
        cout << "Actual: NULL" << endl;
    }
    else
    {
        cout << "Actual: " << r << endl;
    }
}
void substring_test_case_3()
{
    char *r = substring(0, 6, "Soap"); // test if j is out of bounds, shuld return null
    cout << "Expected: NULL" << endl;
    if (r == NULL)
    {
        cout << "Actual: NULL" << endl;
    }
    else
    {
        cout << "Actual: " << r << endl;
    }
}
void substring_test_case_4()
{
    char *r = substring(-1, 8, "Soap"); // test negative numbers i, should return null
    cout << "Expected: NULL" << endl;
    if (r == NULL)
    {
        cout << "Actual: NULL" << endl;
    }
    else
    {
        cout << "Actual: " << r << endl;
    }
}
void substring_test_case_5()
{
    char *r = substring(1, -8, "Soap"); // test negative numbers j, should return null
    cout << "Expected: NULL" << endl;
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
    substring_test_case_1();
    substring_test_case_2();
    substring_test_case_3();
    substring_test_case_4();
    substring_test_case_5();
}
