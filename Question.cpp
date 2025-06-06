#include"Question.h"
#include<iostream>
#include <cctype>

Question::Question(){
    text = "";
    for (int i = 0; i < 4; ++i)
        options[i] = "";
    correctAnswer = 'A';
} 
void Question::setQuestion(const std::string& qText, const std::string opts[4], char correct){
    text = qText;
    for (int i = 0; i < 4; ++i)
        options[i] = opts[i];
    correctAnswer = std::toupper(correct);
}
void Question::displayQuestion() const{
    std::cout << "\n" << text << "\n";
    std::cout << "A) " << options[0] << "\n";
    std::cout << "B) " << options[1] << "\n";
    std::cout << "C) " << options[2] << "\n";
    std::cout << "D) " << options[3] << "\n";
}
bool Question::isCorrect(char answer) const{
    return std::toupper(answer) == correctAnswer;
}
char Question::getCorrectAnswer() const{
    return correctAnswer;
}
std::string Question::getText() const{
    return text;
}
std::string Question::getOption(int index) const{
    if (index >= 0 && index < 4)
        return options[index];
    else
        return "";

}

