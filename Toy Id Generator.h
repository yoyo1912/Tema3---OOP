#ifndef TOY_ID_GENERATOR_H_
#define TOY_ID_GENERATOR_H_

#include <unordered_map>

class ToyIDGenerator {
public:
    ToyIDGenerator();
    int GetNextID();

private:
    int current_id_;
};


#endif  // TOY_ID_GENERATOR_H_
