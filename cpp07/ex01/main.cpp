#include "iter.hpp"

int main( void ) {
	int array[5] = {512, 213, 134, 1287, 123};
	std::cout << blau  << "Array print with iter:" << std::endl;
    iter(array, 5, ::print<int>);
	std::cout << std::endl;
    iter(array, 5, cast<int>);
    std::cout << std::endl << gelb << "Array print with iter after rand cast with iter :" << std::endl ;
    iter(array, 5, print<int>);
	std::cout << std::endl;
    iter(array, 5, addOne<int>);
    std::cout << rot << "Array print with iter after addOne with iter :" << std::endl;
    iter(array, 5, print<int>);
	std::cout << std::endl;
    char array2[5] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << scratch << "Char array print with iter:" << std::endl;
    iter(array2, 5, print<char>);

	return 0;
}