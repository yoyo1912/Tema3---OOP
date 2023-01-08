#include "Toy Id Generator Singleton.h"


ToyIDGeneratorSingleton* ToyIDGeneratorSingleton::instance_ = nullptr;

ToyIDGeneratorSingleton* ToyIDGeneratorSingleton::GetInstance() {
    if (instance_ == nullptr) {
        instance_ = new ToyIDGeneratorSingleton();
    }
    return instance_;
}

ToyIDGeneratorSingleton::ToyIDGeneratorSingleton() : ToyIDGenerator() {
}
