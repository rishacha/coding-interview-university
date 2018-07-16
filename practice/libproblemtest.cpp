/**
 * @brief This file contains all Test related stuff for `LibProblem` class
 * 
 * @file libproblemtest.cpp
 * @author Rishabh Chakrabarti
 * @date 2018-07-16
 */
#include <cppunit/TestCaller.h>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TestRunner.h>
#include "libproblem.h"
/**
 * @brief Test Class with Test Suite for **LibProblem** class
 *
 * This class tests all functions present in the `LibProblem` class
 * using
 * [CppUnit](http://cppunit.sourceforge.net/doc/lastest/cppunit_cookbook.html)
 */
class LibProblemTest : public CppUnit::TestFixture {
   private:
   /**
    * @brief Using a `TestFixture` called test for all testing
    */
    LibProblem *test;
    int testInput[2][7] = {{3, 4, 5, 6, 7, 1, 2}, {8, 9, 10, 4, 5, 6, 7}};
    int testOutput[2] = {1, 4};

   public:
   /**
    * @brief Set the Up object
    * 
    */
    void setUp() { test = new LibProblem(); }
    /**
     * @brief Delete the Object after completion of test
     * 
     */
    void tearDown() { delete test; }

    /**
     * @brief Returns a function pointer to a suite of tests
     * 
     * @return CppUnit::Test* 
     */
    static CppUnit::Test *suite() {
        CppUnit::TestSuite *suiteOfTests =
            new CppUnit::TestSuite("ComplexNumberTest");
        suiteOfTests->addTest(new CppUnit::TestCaller<LibProblemTest>(
            "testMinElement", &LibProblemTest::testMinElement));
        return suiteOfTests;
    }

    /**
     * @brief Testing the minimum element function
     * 
     */
    void testMinElement() {
        for (int i = 0; i < 2; i++) {
            CPPUNIT_ASSERT(testOutput[i] ==
                           test->min_element(testInput[i], 0, 6));
        }
        // CPPUNIT_ASSERT(Complex(10, 1) == Complex(10, 1));
        // CPPUNIT_ASSERT(!(Complex(1, 1) == Complex(2, 2)));
    }
};

int main() {
    CppUnit::TextUi::TestRunner runner;
    // runner.addTest(ExampleTestCase::suite());
    runner.addTest(LibProblemTest::suite());
    runner.run();
    return 0;
}
