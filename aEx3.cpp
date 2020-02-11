#include <iostream>


int main()
{
    const int size = 10;
    int marks[size];
    int ret = 1;
    int answer = 1;
    while(ret)
    {
        std::cout<< "0. Set marks.\n1. Show marks.\n2. Retake exam.\n3. Scholarship." << std::endl; // Общее меню для пльзователя
        int menu;
        std::cin>> menu;
        std::cout<< '\n';
        switch(menu)
        {
            case 0: // Меню выбора системы оценивания
            std::cout << "Choose a rating system.\n1. 5 point system.\n2. 12 point system." << std::endl;
            int sys;
            std::cin >> sys;
            std::cout<< '\n';
            switch (sys)
            {
                case 1: // Первый пункт меню выбора оценивания
                std::cout << "Enter 10 student marks." << std::endl; 
                for (int i = 0; i < size; ++i)
                {
                    int mark = 5;
                    std::cin >> marks[i];
                    if (marks[i] > mark)
                    {
                        while (marks[i] > mark)
                        {
                            std::cout << "Invalid value. Repeat entry or select a different rating system." << std::endl;
                            std::cin >> marks[i];
                        }
                    }
                }
                break;
                std::cout<< std::endl;
                case 2: // Второй пункт меню выбора оценивания
                std::cout << "Enter 10 student marks." << std::endl; 
                for (int i = 0; i < size; ++i)
                {
                    int mark = 12;
                    std::cin >> marks[i];
                    if (marks[i] > mark)
                    {
                        while (marks[i] > mark)
                        {
                            std::cout << "Invalid value. Repeat entry or select a different rating system." << std::endl;
                            std::cin >> marks[i];
                        }
                    }
                }
                break;
                std::cout<< std::endl;
            }
            break;

            case 1: // Вывод оценок на экран
            for(int i = 0; i < size; ++i)
            {
                int count = i + 1 ;
                std::cout<< count << " - " << marks[i] << '\n';
            }
            break;
            std::cout<< std::endl;

            case 2: // Перезапись оценок пересдающих экзамен
            while(answer)
            {
                std::cout<< "Who is retaking?\n";
                int count;
                std::cin>> count;
                std::cout<<"Enter new mark.\n";
                std::cin>> marks[count -1];
                std::cout << "Are there any more retakes?\n1. Yes.\n2. No." << std::endl;
                std::cin >> answer;
                if(answer != 1)
                {
                    break;
                }
            }
            break;
            std::cout<< std::endl;

            case 3: // Расчет под стипендию.
            int sum = 0;
            double itog = 0;
            for(int i = 0; i < size; ++i)
            {   
                sum += marks[i]; 
            }
            itog = sum / size;
            std::cout<< "The final score - " << itog << std::endl;
            if(itog >= 10.7)
            {
                std::cout<< "Scholarship approved." << std::endl;
            }
            else
            {
                std::cout<< "Scholarship denied." << std::endl;
            }
            break;
            std::cout<< std::endl;

        }
        std::cout<< std::endl;
        std::cout<< "Retern to the menu?\n1. Yes\n2. No." << std::endl;
        std::cin>> ret;
        if(ret != 1)
        {
            std::cout << "The end of the program.";
            break;
        }
        std::cout<< std::endl;
    }
    std::cout<< std::endl;
    
    return 0;
}