#include <cppunit/TestCaller.h>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TestRunner.h>
#include "libproblem.h"

class LibProblemTest : public CppUnit::TestFixture {
   private:
    LibProblem *test;
    int testInput[2][7] = {{3, 4, 5, 6, 7, 1, 2}, {8, 9, 10, 4, 5, 6, 7}};
    int testOutput[2] = {1, 4};

   public:
    void setUp() { test = new LibProblem(); }

    void tearDown() { delete test; }

    static CppUnit::Test *suite() {
        CppUnit::TestSuite *suiteOfTests =
            new CppUnit::TestSuite("ComplexNumberTest");
        suiteOfTests->addTest(new CppUnit::TestCaller<LibProblemTest>(
            "testMinElement", &LibProblemTest::testMinElement));
        return suiteOfTests;
    }

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
