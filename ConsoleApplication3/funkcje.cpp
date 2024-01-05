#include "funkcje.h"
#include <iostream>

void Test::startTestCreationProcess() {
    std::cout << "Prosze rozpoczac proces tworzenia testu." << std::endl;
}

void Test::addNewTest() {
    std::cout << "Podaj nazwe testu: ";
    getline(std::cin, testName);

    std::cout << "Podaj przedmiot: ";
    getline(std::cin, subject);

    std::cout << "Dodano nowy test: " << testName << " z przedmiotu " << subject << std::endl;
}

void Test::addQuestionsToTest() {
    char addMore;
    do {
        std::cout << "Podaj tresc pytania: ";
        std::string content;
        getline(std::cin, content);

        std::cout << "Podaj ilosc punktow: ";
        int points;
        std::cin >> points;
        std::cin.ignore();

        Question newQuestion;
        newQuestion.content = content;
        newQuestion.points = points;

        questions[questionCount] = newQuestion;
        questionCount++;

        std::cout << "Czy chcesz dodac kolejne pytanie? (T/N): ";
        std::cin >> addMore;
        std::cin.ignore();
    } while (addMore == 'T' || addMore == 't');
}

void Test::editAndConfigureQuestions() {
    if (questionCount > 0) {
        int selectedQuestion;
        std::cout << "Podaj numer pytania do edycji (1-" << questionCount << "): ";
        std::cin >> selectedQuestion;
        std::cin.ignore();

        if (selectedQuestion >= 1 && selectedQuestion <= questionCount) {
            std::cout << "Podaj nowa tresc pytania: ";
            getline(std::cin, questions[selectedQuestion - 1].content);

            std::cout << "Podaj nowa ilosc punktow: ";
            std::cin >> questions[selectedQuestion - 1].points;
            std::cin.ignore();

            std::cout << "Pytanie zostalo zedytowane." << std::endl;
        }
        else {
            std::cout << "Nieprawidlowy numer pytania." << std::endl;
        }
    }
    else {
        std::cout << "Brak pytan do edycji." << std::endl;
    }
}

void Test::reviewTest() {
    std::cout << "Przeglad testu..." << std::endl;
    for (int i = 0; i < questionCount; ++i) {
        std::cout << "Pytanie " << i + 1 << ": " << questions[i].content << " (Punkty: " << questions[i].points << ")" << std::endl;
    }
}

void Test::saveTest() {
    std::cout << "Zapisywanie testu..." << std::endl;
    std::cout << "Test zostal zapisany." << std::endl;
}
