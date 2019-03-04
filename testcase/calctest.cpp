#include <cppunit/extensions/HelperMacros.h>
#include "../calc.cpp"

class calcTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(calcTest);
    CPPUNIT_TEST( testAdd );
    CPPUNIT_TEST_SUITE_END();
public:
    CalculatorTest(void);
    ~CalculatorTest(void);

    void setUp();
    void tearDown();
    void testAdd();

private:
    calc m_calc;
};

CPPUNIT_TEST_SUITE_REGISTRATION( CalculatorTest );

CalculatorTest::CalculatorTest(void){}
CalculatorTest::~CalculatorTest(void){}
void CalculatorTest::setUp(){}
void CalculatorTest::tearDown(){}

void CalculatorTest::testAdd()
{
    CPPUNIT_ASSERT(m_calc.add(4, 5) == 9);
}
