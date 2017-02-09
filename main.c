/*
 *  main.c
 *
 *  Created on: 10-02-2017
 *  Author: Maxim Zakharov
 *  email:  zakharov.m89@gmail.com
 */
#include <CppUTest/UtestMacros.h>
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


int main(int argc, const char * argv[]) {
	return CommandLineTestRunner::RunAllTests(argc, argv);
}
