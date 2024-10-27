#include<iostream>
using namespace std;

void Tower_of_Hanoi(int, char, char, char);
int pow(int, int);

int main()   //driver code
{
    int n;

    cout << "Program to find moves for Tower of Hanoi puzzle using recursion\n";
    cout << "Author: Shishir Agarwal\n";
    cout << "Experiment Date: 24-08-2023\n";
    cout << "Submission Date: 03-10-2023\n";
    cout << "Enter the number of disks: ";
    cin >> n;  //input for number of disks

    Tower_of_Hanoi(n, 'S', 'A', 'D'); //calling of Recursive Tower of Hanoi
    cout << "Total number of moves: " << pow(2, n) - 1 << endl;

    return 0;
}

// This function prints the required moves of disks to solve the Tower of Hanoi puzzle
void Tower_of_Hanoi(int n, char S, char A, char D)
{
    if (n == 1)
    {
        cout << "Move disk from " << S << " to " << D << endl;
        return;
    }
    else
    {
        Tower_of_Hanoi(n - 1, S, D, A);
        cout << "Move disk from " << S << " to " << D << endl;
        Tower_of_Hanoi(n - 1, A, S, D);
    }
}

int pow(int x, int y)
{
    int res = 1;
    for (int i = 1; i <= y; i++)
    {
        res *= x;
    }
    return res;
}
