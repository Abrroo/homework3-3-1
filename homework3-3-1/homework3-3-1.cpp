#include <iostream>
#include <cstring>

class Calculator
{
private:
    double num1;
    double num2;
public:
    double double_add(double num1, double num2)     { return num1 + num2; }
    double multiply(double num1, double num2)       { return num1 * num2; }
    double subtract_1_2(double num1, double num2)   { return num2 - num1; }
    double subtract_2_1(double num1, double num2)   { return num1 - num2; }
    double divide_1_2(double num1, double num2)     { return num1 / num2; }
    double divide_2_1(double num1, double num2)     { return num2 / num1; }

    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else
        {
            return false;
        }
    }
    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
        {
            return false;
        }
    }

};
int main()
{
    setlocale(LC_ALL, "Russian");
    while (1)
    {
        double num1 = 0, num2 = 0;
        Calculator result{};
        do
        {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if(!result.set_num1(num1)) { std::cout << "Неверный ввод!" << std::endl; }
        } while (!result.set_num1(num1));
        do
        {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (!result.set_num2(num2)) { std::cout << "Неверный ввод!" << std::endl; }
        } while (!result.set_num2(num2));

        std::cout << result.double_add(num1, num2) << std::endl;
        std::cout << result.multiply(num1, num2) << std::endl;
        std::cout << result.subtract_1_2(num1, num2) << std::endl;
        std::cout << result.subtract_2_1(num1, num2) << std::endl;
        std::cout << result.divide_1_2(num1, num2) << std::endl;
        std::cout << result.divide_2_1(num1, num2) << std::endl;

    }
    
}
