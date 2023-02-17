
#include<iostream>
#include<climits>//This is the standard library in c++ which is for the storing and determining the maximumand minimum value.

using namespace std;

/* In main function where main source code is writtten for execute.*/
int main()
{
    int n[10], i, min, min_index = 0;//Declare array n with size of 10.
    min = INT_MAX;//Variable min for finding lowest number.

    cout << "Enter the number\n";//Prompting user.
    
    /* Use a for loop to get an user input*/
    for (i = 0; i <= 9; i++)
    {

        cin >> n[i]; //Cin function for storing value;
    }

    return 0;
}