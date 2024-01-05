#pragma once

// lub
#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <string>

struct Question {
    std::string content;
    int points;
};

class Test {
public:
    std::string testName;
    std::string subject;
    Question questions[100];
    int questionCount = 0;

    void startTestCreationProcess();
    void addNewTest();
    void addQuestionsToTest();
    void editAndConfigureQuestions();
    void reviewTest();
    void saveTest();
};

#endif // FUNKCJE_H

