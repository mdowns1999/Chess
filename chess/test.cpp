#include "test.h"
#include "testpawn.h"
#include "testKing.h"
/*****************************************************************
 * TEST RUNNER
 * Runs all the unit tests
 ****************************************************************/
void testRunner()
{
   testPawn().run();
   testKing().run();
   cout << "Success!\n";
}