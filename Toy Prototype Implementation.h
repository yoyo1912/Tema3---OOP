#ifndef TOY_PROTOTYPE_IMPLEMENTATION_H_
#define TOY_PROTOTYPE_IMPLEMENTATION_H_

#include <iostream>
#include "Toy Prototype.h"
#include "Toy Id Generator Singleton.h"

class ToyPrototypeImplementation : public ToyPrototype<ToyPrototypeImplementation> {
public:
    std::unique_ptr<ToyPrototypeImplementation> Clone() const override;
    void Display() const override;
    void SetId(int id);

private:
    int id_;
};

#endif  // TOY_PROTOTYPE_IMPLEMENTATION_H_