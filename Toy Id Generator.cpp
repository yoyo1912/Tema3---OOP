#include "Toy Id Generator.h"


ToyIDGenerator::ToyIDGenerator() : current_id_(0) {
}

int ToyIDGenerator::GetNextID() {
    return ++current_id_;
}
