#include <iostream>
#include <Array.hpp>

#include <cstdlib>
#define MAX_VAL 750
int main()
{
	// Array<float> emptyTab;
	// std::cout << "Size of empty tab is : " << emptyTab.size() << std::endl;
	// Array<double> defaultTab(2);
	// std::cout << "Default value of tab element is : " << defaultTab[0] << std::endl;
    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
	// 	numbers[0] = 1;
	// 	for (int i = 0; i < MAX_VAL; i++)
	// 	{
	// 		if (mirror[i] != numbers[i])
	// 		{
	// 			std::cerr << "didn't save the same value!!" << std::endl;
	// 			// return 1;
	// 		}
	// 	}
	// 	tmp[0] = 2;
	// 	for (int i = 0; i < MAX_VAL; i++)
	// 	{
	// 		if (mirror[i] != numbers[i])
	// 		{
	// 			std::cerr << "didn't save the same value!!" << std::endl;
	// 			// return 1;
	// 		}
	// 	}
    // }
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         // return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;//
    // return 0;
    Array<int> a(10);
    Array<int> b(100);
    a = b ;
}