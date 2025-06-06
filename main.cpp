#include "Game.h"
#include "Question.h"
#include <iostream>
#include <vector>

int main() {
    Game game;

    std::string options1[4] = { "Berlin", "Madrid", "Paris", "Rome" };
    Question q1;
    q1.setQuestion("What is the capital of France?", options1, 'C');

    std::string options2[4] = { "Earth", "Mars", "Venus", "Jupiter" };
    Question q2;
    q2.setQuestion("Which planet is known as the Red Planet?", options2, 'B');

    std::string options3[4] = { "3", "4", "5", "6" };
    Question q3;
    q3.setQuestion("How many legs does a spider have?", options3, 'D');

    std::string options4[4] = { "Leonardo da Vinci", "Pablo Picasso", "Michelangelo", "Van Gogh" };
    Question q4;
    q4.setQuestion("Who painted the Mona Lisa?", options4, 'A');

    std::string options5[4] = { "Harvard", "Oxford", "MIT", "Stanford" };
    Question q5;
    q5.setQuestion("Which university is located in Cambridge, Massachusetts?", options5, 'C');

    game.addQuestion(q1);
    game.addQuestion(q2);
    game.addQuestion(q3);
    game.addQuestion(q4);
    game.addQuestion(q5);

    game.start();

    return 0;
}

