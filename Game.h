#ifndef GAME_H
#define GAME_H

#include "Question.h"
#include <vector>

class Game {
private:
    std::vector<Question> questions;
    int currentQuestionIndex;
    int score;

public:
    Game();

    void addQuestion(const Question& q);
    void start();

private:
    void askCurrentQuestion();
    void endGame();
};

#endif
