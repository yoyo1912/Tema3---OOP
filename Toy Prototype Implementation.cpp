#include "Toy Prototype Implementation.h"
#include <iostream>



std::unique_ptr<ToyPrototypeImplementation> ToyPrototypeImplementation::Clone() const {
    return std::make_unique<ToyPrototypeImplementation>(*this);
}

void ToyPrototypeImplementation::Display() const {
    std::cout << "Toy (ID: " << id_ << ")" << std::endl;
}

void ToyPrototypeImplementation::SetId(int id) {
    id_ = id;
}
