#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //hiányzik egy alulvonás a vátozó névből
    std::cout << "1-100 ertekek duplazasa" ;//nincs ; a sor végén
    for (int i = 0; i < N_ELEMENTS; i++) // nem teljes a for ciklus
    {
        b[i] = (i + 1) * 2;
    }
	std::cout << "Ertekek:";
    for (int i = 0; i < N_ELEMENTS; i++) //i  helyett i < N_ELEMENTS
    {
        std::cout << b[i] << " "; // szintén hiányzik a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; // hiányzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
