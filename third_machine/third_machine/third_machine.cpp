#include <iostream>
#include <string>
using namespace std;

int state0(char current_alphabet)
{
    string transition_function[3][6] = { " ", "state 0", "state 1", "state 2", "state 3", "state 4",
                                         "a", "state 2", "state 4", "state 3", "state 2", "state 4",
                                         "b", "state 1", "state 0", "state 1", "state 4", "state 4" };
    if (current_alphabet == 'a')
        return 2;
    else if (current_alphabet == 'b')
        return 1;
}

int state1(char current_alphabet)
{
    string transition_function[3][6] = { " ", "state 0", "state 1", "state 2", "state 3", "state 4",
                                         "a", "state 2", "state 4", "state 3", "state 2", "state 4",
                                         "b", "state 1", "state 0", "state 1", "state 4", "state 4" };
    if (current_alphabet == 'a')
        return 4;
    else if (current_alphabet == 'b')
        return 0;
}

int state2(char current_alphabet)
{
    string transition_function[3][6] = { " ", "state 0", "state 1", "state 2", "state 3", "state 4",
                                         "a", "state 2", "state 4", "state 3", "state 2", "state 4",
                                         "b", "state 1", "state 0", "state 1", "state 4", "state 4" };
    if (current_alphabet == 'a')
        return 3;
    else if (current_alphabet == 'b')
        return 1;
}

int state3(char current_alphabet)
{
    string transition_function[3][6] = { " ", "state 0", "state 1", "state 2", "state 3", "state 4",
                                         "a", "state 2", "state 4", "state 3", "state 2", "state 4",
                                         "b", "state 1", "state 0", "state 1", "state 4", "state 4" };
    if (current_alphabet == 'a')
        return 2;
    else if (current_alphabet == 'b')
        return 4;
}

int state4(char current_alphabet)
{
    string transition_function[3][6] = { " ", "state 0", "state 1", "state 2", "state 3", "state 4",
                                         "a", "state 2", "state 4", "state 3", "state 2", "state 4",
                                         "b", "state 1", "state 0", "state 1", "state 4", "state 4" };
    if (current_alphabet == 'a')
        return 4;
    else if (current_alphabet == 'b')
        return 4;
}

bool Is_Accepted_By_Third_Machine(string test)
{
    string transition_function[3][6] = { " ", "state 0", "state 1", "state 2", "state 3", "state 4",
                                         "a", "state 2", "state 4", "state 3", "state 2", "state 4",
                                         "b", "state 1", "state 0", "state 1", "state 4", "state 4" };

    char current_alphabet;
    int current_state = 0, accepted_state = 2;
    for (int i = 0; i < test.size(); i++)
    {
        current_alphabet = test[i];
        if (current_state == 0)
            current_state = state0(current_alphabet);
        else if (current_state == 1)
            current_state = state1(current_alphabet);
        else if (current_state == 2)
            current_state = state2(current_alphabet);
        else if (current_state == 3)
            current_state = state3(current_alphabet);
        else if (current_state == 4)
            current_state = state4(current_alphabet);
    }
    if (current_state == accepted_state)
        return true;
    else
        return false;
}


int main()
{

    string test;
    cout << "\tHello" << endl << "\tThis machine accepts strings with every even b's is followed by an odd a's" << endl;
    cout << "\tPlease Enter a string to test or enter -1 to exit" << endl << "\t";
    cin >> test;
    cout << endl;
    while (test != "-1")
    {
        if (Is_Accepted_By_Third_Machine(test))
            cout << "\t" << test << " is accepted by this machine because it contains every even number of b's followed by an odd number of a's." << endl << endl;
        else
            cout << "\t" << test << " is rejected by this machine because it doesn't contain every even number of b's followed by an odd number of a's" << endl << endl;
        cout << "\tPlease Enter another string to test or enter -1 to exit" << endl << "\t";
        cin >> test;
        cout << endl;
    }
    cout << "\tBye!" << endl;

    return 0;
}
