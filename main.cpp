#include <iostream>
#include <fstream>

int main() {
    std::cout << "=======================" << std::endl;
    std::cout << "SURVEY APP" << std::endl;
    std::cout << "=======================" << std::endl;

    std::cout << "What would you like to do?" << std::endl;
    std::cout << "[1] Create new survey" << std::endl;
    std::cout << "[2] Complete an existing survey" << std::endl;

    return 0;
}

void CreateNewSurvey() {
    std::string name;

    std::cout << "What would you like to name the survey?" << std::endl;

    std::cin >> name;
}

void CompleteExistingSurvey() {

}
