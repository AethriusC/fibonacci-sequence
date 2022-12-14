#include <iostream>
#include <vector>
#include <algorithm>
void increment(std::vector<int> fib, int input,int size,int firstElement, int lastElement, int newElement) {
    for(int i : fib){
        std::cout<<i<<" ";
    }
    std::cout<<"---"<<std::endl;
    newElement = firstElement + lastElement;
    fib.push_back(newElement);
    firstElement = lastElement;
    lastElement = newElement;
    if (fib[input] != NULL) {
        std::cout << fib[input];
    }
    else {
        increment(fib, input,size,firstElement,lastElement,newElement);
    }
    
}

int main()
{
    std::vector<int> fibo{ 0, 1 };
    int size = fibo.size();
    int firstElement = fibo.front();
    int lastElement = fibo[size - 1];
    int input;  int newElement = 0;
    std::cin >> input;
    increment(fibo,input,size,firstElement,lastElement,newElement);
}
