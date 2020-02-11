#include <iostream>

int main()
{
    const int size = 10;
    int A[size];

    for (int i = 0; i < size; ++i)
    {
        A[i] = rand() % 100;
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

   for(int i = 1; i<size; ++i)
    {
        int a = A[i];
        for(int j = i; j>0 && A[j-1]>a; --j) 
        {
            A[j] = A[j-1];
            A[j-1] = a;
        }
    }


    for (int i = 0; i < size; ++i)
    {
        std::cout << A[i] << " ";
    }

    return 0;
}