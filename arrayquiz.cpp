#include <iostream>

int main(){
    std::cout << "Welcome to the Genshin Impact Quiz!\n****************************\n";

    std::string questions[] = {"1. Who is the Pyro Archon?", "2. What year did Genshin Impact release?", "3. The first _______ drama over rewards.", "4. The best region is: "};

    std::string optionAnswers[][4] = {{"A. Neuvillete", "B. Zhongli", "C. Venti", "D. Mavuika"},
                                    {"A. 2019", "B. 2020", "C. 2021", "D. 2022"},
                                    {"A. anniversary", "B. year", "C. event", "D. ratings"},
                                    {"A. Fontaine", "B. Natlan", "C. Sumeru", "D. Liyue"}};
    
    char keyAnswers[] = {'D', 'B', 'A', 'A'};

    int numQuestions = sizeof(questions)/sizeof(std::string);
    int numoptionAnswers = sizeof(optionAnswers[0])/sizeof(std::string);
    int score;

    for (int i = 0; i < numQuestions; i++){
        char userChoice;
        std::cout << questions[i] << '\n';
        for (int j = 0; j < numoptionAnswers; j++){
            std::cout << optionAnswers[i][j] << '\n';
        }
        std::cout << "Please enter in your choice:\n";
        std::cin >> userChoice;
        userChoice = toupper(userChoice);
        if (userChoice == keyAnswers[i]){
            std::cout << "Yay correct!/n";
            score++;
        } else{
            std::cout << "Nope :3\n Hint it's " << keyAnswers[i] << '\n';
        }
        std::cout << "****************************\n";
    }

    std::cout << "You got " << score << "/" << numQuestions << " correct, congratulations!\n";

    std::cout << "****************************\n";

    return 0;
}