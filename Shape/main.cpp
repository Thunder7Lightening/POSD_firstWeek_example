#include <gtest/gtest.h>
#include "utShape.h"
int main( int argc , char **argv )
{
    testing :: InitGoogleTest( &argc , argv ) ;
	int ret = RUN_ALL_TESTS( ) ;
	system("pause");
    return ret;
}
