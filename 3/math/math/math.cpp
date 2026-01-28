#include "pch.h"
#include "framework.h"
#include "math.h"
#include <iostream>

using namespace std;

int add(int a, int b) {


	return a + b;

}

int substract(int a, int b) {

	return a - b;

}

int multiply(int a, int b) {

	return a * b;

}

int divide(int a, int b) {

	if (b == 0) {
		return 0;
	}
	else {

      return a / b;

	}

	

}
