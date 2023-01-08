#ifndef TOY_PROTOTYPE_H_
#define TOY_PROTOTYPE_H_

#include <memory>

template <typename T>
class ToyPrototype {
public:
    virtual std::unique_ptr<T> Clone() const = 0;
    virtual void Display() const = 0;
};

#endif  // TOY_PROTOTYPE_H_