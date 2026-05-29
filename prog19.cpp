#include <iostream>
using namespace std;

// 1. Function to calculate average of array
double findAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
}

// 2. Function to find the 8th term
int find8thTerm(int arr[], int size)
{
    if (size >= 8)
    {
        return arr[7]; // Array index starts at 0, so 8th term = index 7
    }
    else
    {
        cout << "Array has less than 8 elements!" << endl;
        return -1;
    }
}

// 3. Function to count how many times a number occurs
int countOccurrences(int arr[], int size, int num)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}

// 4. Function to find the greatest number
int findGreatest(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // 1. Average
    double avg = findAverage(arr, size);
    cout << "\nAverage of array = " << avg << endl;

    // 2. 8th term
    int eighth = find8thTerm(arr, size);
    if (eighth != -1)
    {
        cout << "8th term = " << eighth << endl;
    }

    // 3. Number of times a value occurs
    int searchNum;
    cout << "\nEnter number to count: ";
    cin >> searchNum;
    int count = countOccurrences(arr, size, searchNum);
    cout << searchNum << " occurs " << count << " times" << endl;

    // 4. Greatest number
    int greatest = findGreatest(arr, size);
    cout << "Greatest number = " << greatest << endl;

    return 0;
}