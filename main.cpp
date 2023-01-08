#include <iostream>
#include <memory>
#include <vector>

#include "Specialized Toy Class.h"
#include "Toy Prototype Implementation.h"
#include "Toy Id Generator Singleton.h"

int main() {
    std::vector<std::unique_ptr<ToyPrototypeImplementation>> toys;
    ToyIDGeneratorSingleton* id_generator = ToyIDGeneratorSingleton::GetInstance();

    while (true) {
        std::cout << "Enter command:\ncreate\nassemble\ndisplay\nquit\n";
        std::string command;
        std::cin >> command;

        if (command == "create") {
            std::unique_ptr<ToyPrototypeImplementation> toy = std::make_unique<ToyPrototypeImplementation>();
            toy->SetId(id_generator->GetNextID());
            toys.push_back(std::move(toy));
        }
        else if (command == "assemble") {
            std::cout << "Enter toy index: ";
            int toy_index;
            std::cin >> toy_index;
            if (toy_index >= 0 && toy_index < toys.size()) {
                SpecializedToyClass<ToyPrototypeImplementation> toy_assembler;
                toy_assembler.Assemble(*toys[toy_index]);
        }
        else
            std::cout << "The toy you want to assemble doesn't exists!\n";
        }
        else if (command == "display") {
            std::cout << "Enter toy index: ";
            int toy_index;
            std::cin >> toy_index;
            if (toy_index >= 0 && toy_index < toys.size())
                toys[toy_index]->Display();
            else
                std::cout << "The toy you want to display doesn't exists!\n";
        }
        else if (command == "quit") {
            break;
        }
    }

    return 0;
}