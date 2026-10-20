// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define True true
#define False false

#define Not !
#define Or ||
#define And &&

void BubbleSort(int arr[6], int size);

void OutputArray(int arr[6], int size);

int main() 
{
    int arr[] = { 1, 4, 5, 2, 8, 9 };
    BubbleSort(arr, 6);
    return 0;
}

void BubbleSort(int arr[6], int size) 
{
    //arrays decay into pointers when passed into function so have to turn pointer into new, local array
    int arrayy[6] = {0,0,0,0,0,0};
    for (int item = 0; item < size; item++)
    {
        arrayy[item] = *(arr + item);
    }

    bool swapped = True;
    while (swapped = True)
    {
        swapped = False;
        for (int item = 0; item < (size - 1); item++)
        {
            if (arrayy[item] > arrayy[item + 1])
            {
                int temp = arrayy[item];
                arrayy[item] = arrayy[item + 1];
                arrayy[item + 1] = temp;
                swapped = True;
            }
        }
        if (swapped == False)
        {
            break;
        }
    }
    OutputArray(arrayy, size);
}

//outputs array to console
void OutputArray(int arr[6], int size)
{
    //arrays decay into pointers when passed into function so have to turn pointer into new, local array
    int arrayy[6] = {0 ,0 ,0 ,0 ,0 ,0 };
    for (int item = 0; item < size; item++)
    {
        arrayy[item] = *(arr + item);
    }

    for (int counter = 0; counter < size; counter++)
    {
        if (counter == (size - 1))
        {
            std::cout << arrayy[counter] << "\n";
        }
        else
        {
            std::cout << arrayy[counter] << ", ";
        }
    }
}


