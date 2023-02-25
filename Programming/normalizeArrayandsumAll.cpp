/**Write a void function called normalizeArray that takes as input an array of integers, an
empty array of type double, and an integer which specifies the size of the arrays. Your 
function should copy the integer array and create a normalized version of it in the array of
doubles. To do this, copy each element from the original array to the second array after
dividing it by the sum of the elements of the original array. Write a second function called
sumAll to calculate the sum of all elements in the integer array. The function should return
the sum of all the elements in the array.*/

#include <iostream>

using namespace std;

//Declaring the function normalizeArray and Defining it.
void normalizeArray(int intArray[], double doubleArray[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += intArray[i];
    }
    for (int i = 0; i < size; i++) {
        doubleArray[i] = static_cast<double>(intArray[i]) / sum;
    }
}

//creating the Second fucntion sumAll to sum the elements of the int Array.
int sumAll(int intArray[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += intArray[i];
    }
    return sum;
}

//Testing the function by calling normalizeArray(arg1,arg2,arg3);
int main() {

    //the following are the arguments we are going to pass to the function
    int intArray[] = {34,87,23,98,55};
    int size = sizeof(intArray) / sizeof(intArray[0]);
    double doubleArray[size];

    //Calling the function
    normalizeArray(intArray, doubleArray, size);

    //This for Loop prints the elements of the doubleArray 
    
    cout << "doubleArray = {";

    for (int i = 0; i < size; i++) {
        cout << doubleArray[i];
    }

    cout << "}" << endl;

    //Calling the function sumAll
    int sum = sumAll(intArray, size);
    cout << "sumAll: " << sum << endl;

    return 0;
}
