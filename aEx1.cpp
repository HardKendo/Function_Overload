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

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - 1; ++j)
        {
            if (A[j] > A[j + 1])
            {
                int b = A[j];
                A[j] = A[j + 1];
                A[j + 1] = b;
            }
        }
    }

    for (int i = 0; i < size; ++i)
    {
        std::cout << A[i] << " ";
    }

    return 0;
}