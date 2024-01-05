#include <iostream>
#include "funkcje.h"

int main() {
    Test myTest;

    myTest.startTestCreationProcess();
    myTest.addNewTest();
    myTest.addQuestionsToTest();
    myTest.editAndConfigureQuestions();

    // Przegląd testu
    myTest.reviewTest();

    myTest.saveTest();

    return 0;
}
