// Zadanie wyklad FizzBuzz.cpp : 
//

#include <iostream>

int main()
{   
    int liczba; 
    int wynik;

   
    do
    {
        std::cout << "Podaj wybrana przez siebie liczbe calkowita dodatnia:\n";
        std::cin >> liczba;    

    if (liczba <= 0)
    {
        std::cout << "Podana liczba nie jest calkowita dodatnia!\n";
    }

    }      
    
    while (liczba <= 0);

    std::cout << "Wypisuje kolejno:\n";

    for (int i = 1; i <= liczba; i++)
    {
        std::cout << i << "\n";

        if (i % 3 == 0)
        {
            std::cout << " Fizz\n";
        }
        else if (i % 5 == 0)
        {
            std::cout << " Buzz\n";
        }

        else if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << " FizzBuzz\n";
        }

    }



    return 0;
}

