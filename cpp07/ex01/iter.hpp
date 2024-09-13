#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <unistd.h>
# include <functional>

//color
# define schwarz "\033[30m"
# define rot "\033[31m"
# define gruen "\033[32m"
# define gelb "\033[33m"
# define blau "\033[34m"
# define magenta "\033[35m"
# define scratch "\033[36m"

template <typename TP, typename TF>
void iter(TP *array, size_t length, TF f)
{
    for (size_t i = 0; i < length; i++)
        f(array[i]);
};

template <typename TA >
void print(TA &a) {
	std::cout << magenta << a << std::endl;
};

template <typename TA >
void cast(TA &a) {
	srand(time(0));
	a = rand() % 9;
	std::cout << schwarz << "rand loading..." << std::endl;
	usleep(696969);
};

template <typename TA >
void addOne(TA &a) {
	a += 1;
};

#endif