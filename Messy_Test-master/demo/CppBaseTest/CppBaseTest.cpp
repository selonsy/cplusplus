#include <iostream>
#include "common.hpp"

int main()
{
	int ret = access_::test_access_1();

	if (ret == 0) fprintf(stdout, "========== test success ==========\n");
	else fprintf(stderr, "########## test fail ##########\n");

	return 0;
}
