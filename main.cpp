#include <iostream>

bool revers1(bool n);
void zapoln(int* n, unsigned int size);
bool checkBalance(int* n, unsigned int size);
void sdvig(int* n, unsigned int size, int s);

int main()
{
    // задание 1**
    
    int n;
    std::cin >> n;
    bool *t;
    t = new bool [n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> t[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << revers1(t[i]) << " ";
    }
    std::cout << "\n";
    // задание 2
    int a[8] {};
    zapoln(a, 8);
    for (int i = 0; i < 8; i++)
    {
        std::cout << a[i] << " ";
    }
    return 0;
    
    // задание 3
    int d[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if (checkBalance(d, 10))
    {
        std::cout << "true";
    }
    else 
    {
        std::cout << "folse";
    }
    
    // задание 4
    int x[5] {1, 2, 3, 4, 5};
    int n1;
    std::cin >> n1;
    sdvig (x, 5, n1);
    for (int i = 0; i < 5; i++)
    {
        std::cout << x[i] << " ";
    }
    //после выполнения задания 4 компилятор перестал собирать программу, я так и не смог разобраться в чём проблема
    return 0;
}
