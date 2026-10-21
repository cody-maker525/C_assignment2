#include <iostream>
using namespace std;
/*
author: clodagh kelly
explanation: input a char and string.
in index of, start count = 0, do it while the str[count] does
not equal to the character as it stops and returns the index then check string char by char using count, if the
character is '\0' then return -1 as this means it is not in the string and we have reached the end, incremenet
count each time. don't need null case because can return -1 which it prints, unlike null.
takes in char c and const char *str
returns an int of index of first occurance of c in str

test case 1, normal char within string,
arguments: c = 's', str = "soap"
returns: nothing, prints expected 0 and the actual result 0

test case 2, char = last letter,
arguments: c = 'p', str = "slep"
returns: nothing, prints expected -1 and the actual result -1

test case 3, char not in word
arguments: c = 'o', str = "pliiiip"
returns: nothing, prints expected -1 and the actual result -1

test case 4, empty string
arguments: c = 'o', str = ""
returns: nothing, prints expected -1 and the actual result -1
 */

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
void indexOf_test_case_1()
{
    int r = indexOf('s', "soap"); //
    cout << "Expected: 0" << endl;
    cout << "Actual: " << r << endl;
}
void indexOf_test_case_2()
{
    int r = indexOf('p', "slep"); // invalid char
    cout << "Expected: 3" << endl;
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