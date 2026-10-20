#include <iostream>
using namespace std;

/*
name: Clodagh Kelly
explanation: create a char array with the function substring. in substring, if i>j then return null, create a
new char array of length (j-i) to find the difference and then +1 for the null character '\0'. while i is less than
j, if i or j is less than 0, the character is the null character(means the word is too short for substring i and j
values) then return null, otherwise loop through the new character from count = 0 and incremenet it. then keep incrementing i
until it is equal to j then it pops out of the while loop, null character is added and returned.
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

    delete[] r; // delete after so you can resuse r
}

void substring_test_case_2()
{
    char *r = substring(5, 2, "truthe"); // test i<j,should return null
    if (r == NULL)
    {
        cout << "Actual: NULL" << endl;
    }
    else
    {
        cout << "Actual: " << r << endl;
    }

    delete[] r; // delete after so you can resuse r
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

    delete[] r; // delete after so you can resuse r
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

    delete[] r; // delete after so you can resuse r
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

    delete[] r; // delete after so you can resuse r
}

main()
{
    substring_test_case_1();
    substring_test_case_2();
    substring_test_case_3();
    substring_test_case_4();
    substring_test_case_5();
}
