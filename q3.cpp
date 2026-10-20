#include <iostream>
using namespace std;
/*
author: clodagh kelly
explanation: input a char and string. check to make sure it is a letter between a and z
using a bool isLetter function where you check it is between a and z and return false otherwise which then
prints out -1 as there was no condition stated for this particular test case so assumed the return value must
be -1 which it prints out from the indexOf method, it checks it at the start.
in index of, start count = 0, do it while the str[count] does
not equal to the character as it stops and returns the index then check string char by char using count, if the
character is '\0' then return -1 as this means it is not in the string and we have reached the end, incremenet
count each time. don't need null case because can return -1 which it prints, unlike null
test case one tests: normal char within string,
test case 2, invalid char,
test case 3, char not in word
test case 4, empty string
 */
bool isLetter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int indexOf(char c, const char *str)
{
    if (!isLetter)
    {
        return -1;
    }
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
void indexOf_test_case_1()
{
    int r = indexOf('s', "soap"); //
    cout << "Expected: 0" << endl;
    cout << "Actual: " << r << endl;
}
void indexOf_test_case_2()
{
    int r = indexOf('=', "plep"); // invalid char
    cout << "Expected: -1" << endl;
    cout << "Actual: " << r << endl;
}
void indexOf_test_case_3()
{
    int r = indexOf('o', "pliiiip"); // no char in string
    cout << "Expected: -1" << endl;
    cout << "Actual: " << r << endl;
}
void indexOf_test_case_4()
{
    int r = indexOf('o', ""); // empty string
    cout << "Expected: -1" << endl;
    cout << "Actual: " << r << endl;
}

main()
{
    indexOf_test_case_1();
    indexOf_test_case_2();
    indexOf_test_case_3();
    indexOf_test_case_4();
}