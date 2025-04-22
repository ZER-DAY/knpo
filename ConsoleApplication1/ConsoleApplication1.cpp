#include <iostream>
#include <vector>
#include <map>
#include <string>

struct Record {
    std::string name;
    std::map<std::string, std::vector<int>> properties;
};

int main() {
    std::vector<Record> records = {
        {"????", {{"????", {1, 2}}, {"??????", {10, 40, 60}}}},
        {"????", {{"????", {1, 4}}, {"??????", {20, 40}}, {"????????", {44}}}}
    };

    std::cout << "Records initialized." << std::endl;
    return 0;
}
