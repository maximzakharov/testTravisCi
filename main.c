/*
 *  main.c
 *
 *  Created on: 10-02-2017
 *  Author: Maxim Zakharov
 *  email:  zakharov.m89@gmail.com
 */


 #include <stdint.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
// #include <CppUTest/UtestMacros.h>
#include <stdio.h>
#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"


TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, FirstTest)
{
   CHECK(true);
}

TEST(FirstTestGroup, SecondTest)
{
   CHECK(1==1);
}

TEST(FirstTestGroup, OtherTest)
{
   CHECK_TEXT(true, "My mistake");
}


int main(int argc, const char * argv[]) {
	return CommandLineTestRunner::RunAllTests(argc, argv);
}
