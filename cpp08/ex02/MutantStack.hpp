#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>
# include <iostream>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    MutantStack();
    MutantStack(const MutantStack& other);
    ~MutantStack();
    MutantStack& operator=(const MutantStack& other);
    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"

#endif