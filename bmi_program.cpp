#include <iostream>
using namespace std;
// Procedure to read data
void ReadData(float &weight, float &height)
{
    cout << "Masukkan berat badan (kg): ";
    cin >> weight;

    cout << "Masukkan tinggi badan (meter): ";
    cin >> height;
}
// Function to calculate BMI
float CalculateBMI(float weight, float height)
{
    return weight / (height * height);
}
