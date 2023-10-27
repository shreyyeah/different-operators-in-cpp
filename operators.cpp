//experiment3
//22070123114
#include<iostream>
int a; int b;int sum;
int main()
{
    /* '+' operator */
    using namespace std;
    std::cout<<"Enter first number:";
    std::cin >>a;
    std::cout<<"Enter second number:";
    std::cin >>b;
    sum= a+b;
    std::cout<<"The sum is:"<<sum<<endl;

    
    /* '-' operator */
    using namespace std;
    std::cout<<"Enter first number:";
    std::cin >>a;
    std::cout<<"Enter second number:";
    std::cin >>b;
    int diff= a-b;
    std::cout<<"The difference is:"<<diff<<endl;

    
    /* '*' operator */
    using namespace std;
    std::cout<<"Enter first number:";
    std::cin >>a;
    std::cout<<"Enter second number:";
    std::cin >>b;
    int product= a*b;
    std::cout<<"The product is:"<<product<<endl;

    
    /* '/' operator */
    using namespace std;
    std::cout<<"Enter first number:";
    std::cin >>a;
    std::cout<<"Enter second number:";
    std::cin >>b;
    int quotient= a/b;
    std::cout<<"The quotient is:"<<quotient<<endl;

    
    /* '%' operator */
    using namespace std;
    std::cout<<"Enter first number:";
    std::cin >>a;
    std::cout<<"Enter second number:";
    std::cin >>b;
    int remainder= a%b;
    std::cout<<"The remainder is:"<<remainder<<endl;

}