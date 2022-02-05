#include <iostream>
#include <fstream>

void CreateNewSurvey();
void CompleteExistingSurvey();

int main() {
    std::cout << "=======================" << std::endl;
    std::cout << "SURVEY APP" << std::endl;
    std::cout << "=======================" << std::endl;

    std::cout << "What would you like to do?" << std::endl;
    std::cout << "[1] Create new survey" << std::endl;
    std::cout << "[2] Complete an existing survey" << std::endl;

    int response;

    switch (response) {
        case 1:
            CreateNewSurvey();
            break;
        case 2:
            CompleteExistingSurvey();
            break;
        default:
            std::cout << "Default is to create a new survey";
            CreateNewSurvey();
            break;
    }

    return 0;
}

void CreateNewSurvey() {
    std::string name;

    std::cout << "What would you like to name the survey?" << std::endl;

    std::cin >> name;

    std::ofstream Survey("./surveys/" + name + ".txt");
}

void CompleteExistingSurvey() {

}
