#include <fstream>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/XmlOutputter.h>

int main()
{
    CPPUNIT_NS::TextUi::TestRunner runner;
    CPPUNIT_NS::Test* suite = CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest();

    runner.addTest( suite );

    runner.setOutputter( new CPPUNIT_NS::CompilerOutputter( &runner.result(), CPPUNIT_NS::stdCOut() ));
    bool wasSucessful = runner.run();
    
    ofstream xmlFileOut("cppTestResults.xml");
    XmlOutputter xmlOut(&runner, xmlFileOut);
    xmlOut.write();

    return wasSucessful ? 0 : 1;
}
