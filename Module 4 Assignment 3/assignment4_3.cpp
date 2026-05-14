#include <iostream>

int main()
{
    int rows;

    std::cout << "Enter number of rows" << std::endl;
    std::cin >> rows;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
            std::cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            std::cout << "*";

        std::cout << std::endl;
    }

    for (int i = rows - 1;i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
            std::cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            std::cout << "*";

        std::cout << std::endl;
    }
    return 0;
}