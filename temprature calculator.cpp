#include <iostream> //input dan output
#include <cmath>

int main() {

    double temp;
    char unit;

    std::cout << "******** konversi temprature ********\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "Silahkan pilh yang ingin dikonversi: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Masukkan suhu dalam celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Hasilnya adalah " << temp << " Celcius";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Masukkan suhu dalam fahrenheit: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Hasilnya adalah " << temp << " fahrenheit";
    }
    else {
        std::cout << "Silahkan masukkan yang ada di opsi!";
    }
    
    
    
    
 return 0;
}
