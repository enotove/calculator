#include <iostream>



class Calculator
{
public:
    
    Calculator()
    {
        this->num1 = 0;
        this->num2 = 0;
    }
    Calculator(int num1)
    {
        this->num1 = num1;
        this->num2 = 0;
    }
    Calculator(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2() { return num1 - num2; }
    double subtract_2_1() { return num2 - num1; }
    double divide_1_2() { return num1 / num2; }
    double divide_2_1() { return num2 / num1; }
    bool set_num1(double num1) {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else
        {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
        }
            
    bool set_num2(double num2) {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
        {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
    }
private:
    int num1;
    int num2;
    
};

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    Calculator calculator;
    int num = 0;
    bool flag = false;
    while (true)
    {
        do
        {
            std::cout << "Введите Num1: ";
            std::cin >> num;
            flag = calculator.set_num1(num);
            num = 0;

        } while (flag == false);
        do
        {
            std::cout << "Введите Num2: ";
            std::cin >> num;
            flag = calculator.set_num2(num);
            num = 0;

        } while (flag == false);
        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
    }
    
    
    
}
