#include <iostream>
using namespace std;

int input = 0;

int main()
{
    //1
    std::cout << "#1" << "\n";
    const int X = 20;
    std::cout << "enter: ";
    std::cin >> input;

    std::cout << "constanta: " << X << "\n";
    std::cout << X << "-" << input << "=" << X - input << "\n";
    std::cout << X << "+" << input << "=" << X + input << "\n";
    std::cout << X << "*" << input << "=" << X * input << "\n";
    std::cout << X << "/" << input << "=" << X / input << "\n";
    std::cout << "\n";
    //2
    std::cout << "#2" << "\n";
    std::cout << "enter a two-digit number: ";
    std::cin >> input;

    int first = input / 10;
    int second = input % 10;

    if ((first == 3 || second == 3)) {
        std::cout << "true" << "\n";
    }
    //3 7 4 8 9
    else if (first == 7 || second == 7) {
        std::cout << "true" << "\n";
    }
    else if (first == 4 || second == 4) {
        std::cout << "true" << "\n";
    }
    else if (first == 8 || second == 8) {
        std::cout << "true" << "\n";
    }
    else if (first == 9 || second == 9) {
        std::cout << "true" << "\n";
    }
    else {
        std::cout << "false" << "\n";
    }
    std::cout << "#3" << "\n";
    std::cout << "enter the number N" << "\n";
    std::cin >> input;

    double n = input;
    double sum = 0;
    double i = 0;
    for (i = 0; i <n; i++) {
        std::cout << 1/i << "\n";
    }



    //4
    std::cout << "#4" << "\n";




    int Array[3][4], q, j,nn,mm;
    cout << "Enter N = "; cin >> nn;
    cout << "Enter M = "; cin >> mm;
   
    for (q = 1; q < 3; q++) {

        for (j = 0; j < 4; j++) {
            Array[q][j] = rand() % 10 - 5;
            cout << Array[q][j] << " ";
            //доделать вводения числа  клавиатру и замена первого елемента  миниумом
        }
        cout << "\n";
    }
   
   
  
    
    std::cout << "#5" << "\n";
    exit(3);
    return 3;
    //доделать завершение процеса

}

