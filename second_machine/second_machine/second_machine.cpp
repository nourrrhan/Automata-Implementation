#include <iostream>
#include <string>
using namespace std;

int state0(char current_alphabet)
{
    string transition_function[3][3] = { " ", "state 0", "state 1",
                                         "0", "state 1", "state 1",
                                         "1", "state 0", "state 0" };
    if (current_alphabet == '0')
        return 1;
    else if (current_alphabet == '1')
        return 0;
}

int state1(char current_alphabet)
{
    string transition_function[3][3] = { " ", "state 0", "state 1",
                                         "0", "state 1", "state 1",
                                         "1", "state 0", "state 0" };
    if (current_alphabet == '0')
        return 1;
    else if (current_alphabet == '1')
        return 0;
}


bool Is_Accepted_By_Second_Machine(string test)
{
    string transition_function[3][3] = { " ", "state 0", "state 1",
                                         "0", "state 1", "state 1",
                                         "1", "state 0", "state 0" };
    char current_alphabet;
    int current_state = 0, accepted_state = 1;
    for (int i = 0; i < test.size(); i++)
    {
        current_alphabet = test[i];
        if (current_state == 0)
            current_state = state0(current_alphabet);
        else if (current_state == 1)
            current_state = state1(current_alphabet);
    }
    if (current_state == accepted_state)
        return true;
    else
        return false;
}


int main()
{

    string test;
    cout << "\tHello" << endl << "\tThis machine accepts the binary representation of even numbers" << endl;
    cout << "\tPlease Enter a string to test or enter -1 to exit" << endl << "\t";
    cin >> test;
    cout << endl;
    while (test != "-1")
    {
        if (Is_Accepted_By_Second_Machine(test))
            cout << "\t" << test << " is accepted by this machine because it is a binary representation of an even number." << endl << endl;
        else
            cout << "\t" << test << " is rejected by this machine because it is not a binary representation of an even number." << endl << endl;
        cout << "\tPlease Enter another string to test or enter -1 to exit" << endl << "\t";
        cin >> test;
        cout << endl;
    }
    cout << "\tBye!" << endl;

    return 0;
}
