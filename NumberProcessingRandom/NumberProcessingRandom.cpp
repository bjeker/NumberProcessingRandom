// Ryan Bieker, CS 3060 001, Chapter 5 Programming Challenges, due 2/22/2022, 
//Displays info on random number text file such as number of numbers, sum of the numbers, and average of the numbers

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //vars to be used
    int num;
    int counter = 0;
    int total = 0;
    double avg;

    //opem the random number file
    ifstream numbers;
    numbers.open("Random.txt");

    //while reader has input
    while (numbers >> num)
    {
    //count up while taking a total
        counter++;
        total += num;
    }

    //calculate average
    avg = (double)total / (double)counter;

    //display
    cout << "Number of numbers: " << counter << endl;
    cout << "Sum of the numbers: " << total << endl;
    cout << "Average of the numbers: " << avg << endl;

    numbers.close();
}
