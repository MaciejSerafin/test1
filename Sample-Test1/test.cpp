#include "gtest/gtest.h"
#include "C:\Users\macie\Desktop\inżynieria oprogramownia\testy\ConsoleApplication3\ConsoleApplication3\funkcje.h"
#include <sstream>
#include "pch.h"

// Test case for saveTest()
TEST(SaveTest, SaveTest) {
    // Arrange
    testing::internal::CaptureStdout(); // Przechwyć wyjście standardowe

    // Act
    saveTest();
    std::string output = testing::internal::GetCapturedStdout(); // Pobierz przechwycone wyjście

    // Assert
    EXPECT_EQ(output, "Zapisywanie testu...\nTest zostal zapisany.\n");
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}