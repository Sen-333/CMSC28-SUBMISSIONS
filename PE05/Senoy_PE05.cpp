#include <iostream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 10;

// Function to get user input for any integer (not zero)
int GetInput()
{
    int num;
    cout << "Input an integer: ";
    cin >> num;
    return num;
}

// Function to find the largest element in the array
int FindLargest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

// Function to find the smallest element in the array
int FindSmallest(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

// Function to calculate the average of the array
double CalcAverage(int arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

// Function to calculate the variance of the array
double CalcVariance(int arr[], int size, double average)
{
    double variance = 0;
    for (int i = 0; i < size; i++)
    {
        variance += pow(arr[i] - average, 2);
    }
    return variance / size;
}

// Function to calculate the standard deviation of the array
double CalcStandardDeviation(double variance)
{
    return sqrt(variance);
}

// Function to display the results
void DisplayResults(int largest, int smallest, double average, double variance, double standardDeviation)
{
    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Average = " << average << endl;
    cout << "Standard deviation = " << standardDeviation << fixed << endl;
    cout << "Variance = " << variance << endl;
}
// Main Function
int main()
{
    // Program Header
    cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Programming Exercise 05" << endl;
    cout << "Submitted by: Kyle Howard Senoy" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "This program will ask the user to input various numbers (positive or negative but not zero) and perform basic statistics on these numbers. \n" << endl;

    //  Initialize Array and Counter
    int num[MAX_SIZE];
    int count = 0;

    do
    {
        int input = GetInput();
        if (input != 0 && count < MAX_SIZE - 1)
        {
            num[count] = input;
            count++;
        }
        else if (input == 0)
        {
            cout << "You entered 0. Please enter a non-zero positive or negative integer." << endl;
            break;
        }
        else
        {
            break;
        }
    } while (true);

    // Calculate the largest number in the array
    int largest = FindLargest(num, count);

    // Calculate the smallest number in the array
    int smallest = FindSmallest(num, count);

    // Calculate the average of the numbers in the array
    double average = CalcAverage(num, count);

    // Calculate the variance of the numbers in the array
    double variance = CalcVariance(num, count, average);

    // Calculate the standard deviation of the numbers in the array
    double standardDeviation = CalcStandardDeviation(variance);

    // Call function DisplayResults to display output
    DisplayResults(largest, smallest, average, variance, standardDeviation);

    return 0;
}
