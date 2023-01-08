#ifndef TOY_ID_GENERATOR_SINGLETON_H_
#define TOY_ID_GENERATOR_SINGLETON_H_

// The 'Singleton' design pattern in the code uses the 'Single Responsibility Principle' (SRP).
// The ToyIDGeneratorSingleton class has only one responsibility,
// which is to generate unique object IDs, and all its methods are related to that responsibility.
#include "Toy Id Generator.h"


class ToyIDGeneratorSingleton : public ToyIDGenerator {
public:
    static ToyIDGeneratorSingleton* GetInstance();

private:
    ToyIDGeneratorSingleton();
    static ToyIDGeneratorSingleton* instance_;
};



#endif  // TOY_ID_GENERATOR_SINGLETON_H_
