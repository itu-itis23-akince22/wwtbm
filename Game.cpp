#include "Game.h"
#include <iostream>
#include <cctype>
#include <algorithm> 
#include <random>  
Game::Game(): currentQuestionIndex(0), score(0){}

void Game::addQuestion(const Question& q){
    questions.push_back(q);
}
void Game::start() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(questions.begin(), questions.end(), g);
    std::cout << "Welcome to 'Who Wants to Be a Millionaire!'\n";

    while (currentQuestionIndex < questions.size()) {
        askCurrentQuestion();

        char userAnswer;
        std::cout << "Enter your answer (A, B, C, D): ";
        std::cin >> userAnswer;

        if (questions[currentQuestionIndex].isCorrect(userAnswer)) {
            std::cout << "Correct!\n";
            score += 1000; 
            currentQuestionIndex++;
        } else {
            std::cout << "Wrong! The correct answer was: " 
                      << questions[currentQuestionIndex].getCorrectAnswer() << "\n";
            break;
        }
    }

    endGame();
}
void Game::askCurrentQuestion() {
    std::cout << "\n--- Question " << (currentQuestionIndex + 1) << " ---\n";
    questions[currentQuestionIndex].displayQuestion();
}
void Game::endGame() {
    std::cout << "\nGame Over! Your final score: " << score << "\n";
    if (currentQuestionIndex == questions.size()) {
        std::cout << "Congratulations! You answered all questions correctly!\n";
    }
}