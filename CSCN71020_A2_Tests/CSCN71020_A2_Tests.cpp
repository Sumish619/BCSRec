#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "rectangle.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020A2Tests
{
    // --- PART 1: Calculation Tests (6 Tests) ---
    TEST_CLASS(CalculationTests)
    {
    public:
        TEST_METHOD(GetPerimeter_NormalValues_ReturnsCorrectPerimeter)
        {
            int length = 5; int width = 10; int expected = 30;
            int actual = getPerimeter(length, width);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(GetPerimeter_MinimumValidValues_ReturnsCorrectPerimeter)
        {
            int length = 1; int width = 1; int expected = 4;
            int actual = getPerimeter(length, width);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(GetPerimeter_MaximumValidValues_ReturnsCorrectPerimeter)
        {
            int length = 99; int width = 99; int expected = 396;
            int actual = getPerimeter(length, width);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(GetArea_NormalValues_ReturnsCorrectArea)
        {
            int length = 5; int width = 10; int expected = 50;
            int actual = getArea(length, width);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(GetArea_MinimumValidValues_ReturnsCorrectArea)
        {
            int length = 1; int width = 1; int expected = 1;
            int actual = getArea(length, width);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(GetArea_MaximumValidValues_ReturnsCorrectArea)
        {
            int length = 99; int width = 99; int expected = 9801;
            int actual = getArea(length, width);
            Assert::AreEqual(expected, actual);
        }
    };

    // --- PART 2: Setter & Boundary Tests (12 Tests) ---
    TEST_CLASS(SetterTests)
    {
    public:
        TEST_METHOD(SetLength_NormalValidInput_SetsValue)
        {
            int input = 50; int expected = 50;
            int actual = setLength(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetLength_LowerBoundaryValue_SetsValue)
        {
            int input = 1; int expected = 1;
            int actual = setLength(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetLength_UpperBoundaryValue_SetsValue)
        {
            int input = 99; int expected = 99;
            int actual = setLength(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetLength_BelowRangeZero_KeepsOne)
        {
            int input = 0; int expected = 1;
            int actual = setLength(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetLength_AboveRangeHundred_KeepsOne)
        {
            int input = 100; int expected = 1;
            int actual = setLength(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetLength_NegativeInput_KeepsOne)
        {
            int input = -15; int expected = 1;
            int actual = setLength(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetWidth_NormalValidInput_SetsValue)
        {
            int input = 25; int expected = 25;
            int actual = setWidth(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetWidth_LowerBoundaryValue_SetsValue)
        {
            int input = 1; int expected = 1;
            int actual = setWidth(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetWidth_UpperBoundaryValue_SetsValue)
        {
            int input = 99; int expected = 99;
            int actual = setWidth(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetWidth_BelowRangeZero_KeepsOne)
        {
            int input = 0; int expected = 1;
            int actual = setWidth(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetWidth_AboveRangeHundred_KeepsOne)
        {
            int input = 100; int expected = 1;
            int actual = setWidth(input);
            Assert::AreEqual(expected, actual);
        }
        TEST_METHOD(SetWidth_NegativeInput_KeepsOne)
        {
            int input = -5; int expected = 1;
            int actual = setWidth(input);
            Assert::AreEqual(expected, actual);
        }
    };
}