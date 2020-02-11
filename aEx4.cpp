#include <iostream>


int main()
{
    srand(time(nullptr));
    const int size = 9;
    int Arr[size];


    for(int i = 0; i < size; ++i)
    {
        Arr[i] = rand()% 100 - 50;
        std::cout<< Arr[i] << " ";
    }
    std::cout<< std::endl;

    int sum = 0, itog = 0;
    for(int i = 0; i < size; ++i)
    {
        sum += Arr[i];
    }
    std::cout<< sum;
    std::cout<< std::endl;
    itog = sum / size;
    std::cout<< itog;
    if(itog > 0)
    {
        for(int j = 0; j < size; ++j)
        {
            for(int i = j+1; i < (size*2)/3; ++i)
            {
                if(Arr[j]>Arr[i])
                {
                    int tmp = Arr[j];
                    Arr[j] = Arr[i];
                    Arr[i] = tmp;
                }
            } 
        }
        std::cout<< std::endl;
        for(int i = 0; i < (size*2)/3; ++i)
        {
            std::cout<< Arr[i] << " ";
        }
        for(int i = size - 1; i>= (size*2)/3; --i)
        {
            std::cout<<Arr[i] << " ";
        }
    }
    else
    {
       for(int j = 0; j < size; ++j)
        {
            for(int i = j+1; i < size/3; ++i)
            {
                if(Arr[j]>Arr[i])
                {
                    int tmp = Arr[j];
                    Arr[j] = Arr[i];
                    Arr[i] = tmp;
                }
            }
        } 

        std::cout<< std::endl;
        for(int i = 0; i < size/3; ++i)
        {
            std::cout<< Arr[i] << " ";
        }
        for(int i = size - 1; i>= size/3; --i)
        {
            std::cout<<Arr[i] << " ";
        }
    }
    
   

    return 0;
}