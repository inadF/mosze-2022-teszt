#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hiányzik egy alulvonás a vátozó névből
    std::cout << '1-100 ertekek duplazasa' //nincs ; a sor végén
    for (int i = 0;) // nem teljes a for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //i  helyett i < N_ELEMENTS
    {
        std::cout << "Ertek:" // szintén hiányzik a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] // hiányzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
