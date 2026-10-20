#include <iostream>
using namespace std;
/*
author: clodagh kelly
explanation: start count at 0, while src is not null,
if dest[count] becomes null char, return null as this means it's too small to copy onto
otherwise copy the character of src into dest. after add the null char at the end using value count
which incremented each time in the while loop and is the length
test case 1: normal words both, valid
test 2: dest is too small
test 3: src is smaller but prints out dest
*/
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

void copy_test_case_1()
{
    char dest[] = "deodorant";
    char *r = copy(dest, "treuoroko"); // tests normal word, follows all rules
    cout << "Expected: treuoroko" << endl;
    if (r == NULL)
    {
        cout << "Actual: NULL" << endl;
    }
    else
    {
        cout << "Actual: " << r << endl;
    }
}
void copy_test_case_2()
{
    char dest[] = "pop";
    char *r = copy(dest, "polo"); // tests normal word, follows all rules
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
void copy_test_case_3()
{
    char dest[] = "polllllll";
    char *r = copy(dest, "pop"); // tests normal word, follows all rules
    cout << "Expected: pop" << endl;
    if (r == NULL)
    {
        cout << "Actual: NULL" << endl;
    }
    else
    {
        cout << "Actual: " << r << endl;
    }
}

int main()
{
    copy_test_case_1();
    copy_test_case_2();
    copy_test_case_3();
    return 0;
}