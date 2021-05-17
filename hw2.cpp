#include <iostream>

int main()
{
    //1
    int integer = 1;
    float num = 1;
    bool Y_or_N = 0;
    char name = 74;
    short small = 2;
    long big = 22222;
    long long very_big = 222222222;
    std::cout <<  "созднны переменные" << std::endl;
    
    //2
    enum TicTakToe{empty, X, O};
    
    //3
    int TicTakArr [9]={1,0,0,2,1,1,2,1,2};
    
    
    //4
    struct field
    {
        int a;
        int b;
        //нужно снабдить массивом TicTakarr но он уже был создан и инициализирован в задании 3
    };
    //5
    
    
    return 0;
}
