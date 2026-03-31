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
// Function to determine BMI status
string GetStatus(float bmi)
{
    if (bmi < 18.5)
        return "Underweight";ا
    else if (bmi < 25)
        return "Normal Weight";
    else if (bmi < 30)
        return "Excess Weight";
     else
        return "Obesity";
}

int main()
{
    float weight, height, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---\n\n";

    ReadData(weight, height);
    bmi = CalculateBMI(weight, height);

    cout << "\n--- Hasil ---\n";
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << GetStatus(bmi) << endl;

    return 0;
}
