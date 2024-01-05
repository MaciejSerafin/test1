//
// pch.h
//

#pragma once

#include "gtest/gtest.h"
#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <string>

struct Question {
    std::string content;
    int points;
};

struct Test {
    std::string testName;
    std::string subject;
    Question questions[100];
    int questionCount = 0;
};

void startTestCreationProcess(Test& myTest);
void addNewTest(Test& myTest);
void addQuestionsToTest(Test& myTest);
void editAndConfigureQuestions(Test& myTest);
void reviewTest(const Test& myTest);
void saveTest();

#endif // FUNKCJE_H