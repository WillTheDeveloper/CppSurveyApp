#include <iostream>
#include <fstream>

void CreateNewSurvey();
void CompleteExistingSurvey();
void AddQuestions(const std::string& filename);

int main() {
    std::cout << "=======================" << std::endl;
    std::cout << "SURVEY APP" << std::endl;
    std::cout << "=======================" << std::endl;

    std::cout << "What would you like to do?" << std::endl;
    std::cout << "[1] Create new survey" << std::endl;
    std::cout << "[2] Complete an existing survey" << std::endl;

    int response;

    std::cin >> response;

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

void AddQuestions(const std::string& filename) {
    std::ofstream Survey(filename);

    bool add;

    add = true;

    while (add) {
        std::string question;
        std::cout << "Enter the question you would like to add:" << std::endl;
        std::cin >> question;
        Survey << question << std::endl;

        if (question.empty())
        {
            add = false;
        }
    }
}

void CreateNewSurvey() {
    std::string name;

    std::cout << "What would you like to name the survey?" << std::endl;

    std::cin >> name;

    std::ofstream Survey("../surveys/" + name + ".txt");

    std::string file;
    file = "../surveys/" +  name + ".txt";

    Survey.close();

    AddQuestions(file);
}

void CompleteExistingSurvey() {

}
