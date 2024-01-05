//
// pch.cpp
//

#include "pch.h"
#include <iostream>

#include "C:\Users\macie\Desktop\inżynieria oprogramownia\testy\ConsoleApplication3\ConsoleApplication3\funkcje.h"




void startTestCreationProcess(Test& myTest) {
    std::cout << "Prosze rozpoczac proces tworzenia testu." << std::endl;
}

void addNewTest(Test& myTest) {
    std::cout << "Podaj nazwe testu: ";
    getline(std::cin, myTest.testName);

    std::cout << "Podaj przedmiot: ";
    getline(std::cin, myTest.subject);

    std::cout << "Dodano nowy test: " << myTest.testName << " z przedmiotu " << myTest.subject << std::endl;
}

void addQuestionsToTest(Test& myTest) {
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

        myTest.questions[myTest.questionCount] = newQuestion;
        myTest.questionCount++;

        std::cout << "Czy chcesz dodac kolejne pytanie? (T/N): ";
        std::cin >> addMore;
        std::cin.ignore();
    } while (addMore == 'T' || addMore == 't');
}

void editAndConfigureQuestions(Test& myTest) {
    if (myTest.questionCount > 0) {
        int selectedQuestion;
        std::cout << "Podaj numer pytania do edycji (1-" << myTest.questionCount << "): ";
        std::cin >> selectedQuestion;
        std::cin.ignore();

        if (selectedQuestion >= 1 && selectedQuestion <= myTest.questionCount) {
            std::cout << "Podaj nowa tresc pytania: ";
            getline(std::cin, myTest.questions[selectedQuestion - 1].content);

            std::cout << "Podaj nowa ilosc punktow: ";
            std::cin >> myTest.questions[selectedQuestion - 1].points;
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

void reviewTest(const Test& myTest) {
    std::cout << "Przeglad testu..." << std::endl;
    for (int i = 0; i < myTest.questionCount; ++i) {
        std::cout << "Pytanie " << i + 1 << ": " << myTest.questions[i].content << " (Punkty: " << myTest.questions[i].points << ")" << std::endl;
    }
}

void saveTest() {
    std::cout << "Zapisywanie testu..." << std::endl;
    std::cout << "Test zostal zapisany." << std::endl;
}