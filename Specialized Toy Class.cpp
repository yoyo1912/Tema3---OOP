#include "Specialized Toy Class.h"
#include "Toy Prototype Implementation.h"
#include <iostream>

template <typename T>
void SpecializedToyClass<T>::Assemble(T& toy) {
    std::cout << "Assembling toy..." << std::endl;
}

template class SpecializedToyClass<ToyPrototypeImplementation>;