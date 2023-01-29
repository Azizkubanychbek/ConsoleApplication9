

#include <iostream>

class Counter {
public:

    Counter() {
        a = 1;
    }
    Counter(int value) {
        a = value;
    }
    void add() {
        a++;
    }
    void min() {
        a--;
    }
    void rav() {
        std::cout << a << "\n";
    }

private:
    int a ;
 
};

int main()
{
    std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;
    int num = 1;

    
    Counter bes;
    
    if (answer == "да") {
        std::cout << " Введите начальное значение счётчика: ";
        std::cin >> num;
        Counter сounter(num);

    }
    std::string g;
    while (g!="x")
    {
        std::cout << "Введите команду('+', '-', '=' или 'x') : ";
        std::cin >> g;
        if (g == "+") {
            bes.add();
        }
        else if (g == "-") {
            bes.min();
        }
        else if (g == "=") {
            bes.rav();
        }
        else if (g == "x") {
            std::cout << "до свидания!";
            break;
        }
        else {
            continue;
        }
    }
}
