#include <iostream>
using namespace std;
/*
author: clodagh kelly
explanation: initialize count as 0, go through the array until hit null pointer while counting up
and incrementing count, return count as the length
test cases:
test 1: length = 5, return 5
test 2: length = 0, return 0
test 3: length = 20*/
unsigned int length(const char *str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}
void copy_test_case_1()
{
    int r = length("trees");
    cout << "Expected: 5" << endl;
    cout << "Actual: " << r << endl;
}
void copy_test_case_2()
{
    int r = length("");
    cout << "Expected: 0" << endl;
    cout << "Actual: " << r << endl;
}
void copy_test_case_3()
{
    int r = length("12345678901234567890");
    cout << "Expected: 20" << endl;
    cout << "Actual: " << r << endl;
}
main()
{
    copy_test_case_1();
    copy_test_case_2();
    copy_test_case_3();
}