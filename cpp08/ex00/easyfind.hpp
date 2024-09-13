#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <list>
# include <deque>
# include <exception>
# include <iterator>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw() {
			return ("Value not found");
		}
};

/**
 * @brief Finds the first occurrence of a given number in a container.
 * 
 * @tparam T The type of the container.
 * @param container The container to search in.
 * @param numToFind The number to find.
 * @return An iterator pointing to the first occurrence of the number in the container.
 * @throws NotFoundException if the number is not found in the container.
 */
template<typename T>
typename T::iterator easyfind(T &container, int numToFind)
{
	typename T::iterator vecToRetr = std::find(container.begin(), container.end(), numToFind);
	if (vecToRetr == container.end())
		throw NotFoundException();
	return vecToRetr;
}

#endif