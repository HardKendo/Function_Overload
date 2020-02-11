#include <iostream>
#include <iomanip>

int matrix(int size, int M[][6])
{
    srand(time(nullptr));

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            M[i][j] = rand() % (99 - 10) + 10;
            std::cout << M[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    int min = M[0][0];
    int max = M[0][0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                min = min > M[i][j] ? M[i][j] : min;
                max = max < M[i][j] ? M[i][j] : max;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Minimum diagonal value: " << min << std::endl;
    std::cout << "Maximum diagonal value: " << max << std::endl;

    std::cout << "\nSorted matrix."<< std::endl;
    for (int i = 0; i < size; ++i)
    {
        {
            for (int j = 1; j < size; ++j)
            {
                int b = M[i][j];
                for (int k = j; k > 0 && M[i][k - 1] > b; --k)
                {
                    M[i][k] = M[i][k - 1];
                    M[i][k - 1] = b;
                }
            }
        }
    }
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << M[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

double matrix(int size, double M[][6])
{
    srand(time(nullptr));
    std::cout << std::setprecision(4);
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            M[i][j] = (double)(rand()) / RAND_MAX * (99 - 10) + 10;
            std::cout << M[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    double min = M[0][0];
    double max = M[0][0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                min = min > M[i][j] ? M[i][j] : min;
                max = max < M[i][j] ? M[i][j] : max;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Minimum diagonal value: " << min << std::endl;
    std::cout << "Maximum diagonal value: " << max << std::endl;

    std::cout << "\nSorted matrix."<< std::endl;
    for (int i = 0; i < size; ++i)
    {
        {
            for (int j = 1; j < size; ++j)
            {
                int b = M[i][j];
                for (int k = j; k > 0 && M[i][k - 1] > b; --k)
                {
                    M[i][k] = M[i][k - 1];
                    M[i][k - 1] = b;
                }
            }
        }
    }
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << M[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

char matrix(int size, char M[][6])
{
    srand(time(nullptr));
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            M[i][j] = rand() % ('z' - 'A') + 'A';
            std::cout << M[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    char min = M[0][0];
    char max = M[0][0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                min = min > M[i][j] ? M[i][j] : min;
                max = max < M[i][j] ? M[i][j] : max;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Minimum diagonal value: " << min << std::endl;
    std::cout << "Maximum diagonal value: " << max << std::endl;

    std::cout << "\nSorted matrix."<< std::endl;
    for (int i = 0; i < size; ++i)
    {
        {
            for (int j = 1; j < size; ++j)
            {
                int b = M[i][j];
                for (int k = j; k > 0 && M[i][k - 1] > b; --k)
                {
                    M[i][k] = M[i][k - 1];
                    M[i][k - 1] = b;
                }
            }
        }
    }
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << M[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    const int size = 6;
    char M[size][6];

    matrix(size, M);

    return 0;
}