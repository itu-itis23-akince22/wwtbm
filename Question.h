#ifndef QUESTION_H
#define QUESTION_H

#include <string>

class Question {
private:
    std::string text;
    std::string options[4];
    char correctAnswer;

public:
    Question();  

    void setQuestion(const std::string& qText, const std::string opts[4], char correct);

    void displayQuestion() const;

    bool isCorrect(char answer) const;

    char getCorrectAnswer() const;
    std::string getText() const;
    std::string getOption(int index) const;
};

#endif
