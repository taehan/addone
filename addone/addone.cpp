// addone.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include <iostream>
#include <string>

int main( int argc, char *argv[] )
{
	for (int i = 1; i < argc; i++) {
		int x = std::stoi(argv[i]);
		std::cout << x + 1 << std::endl;
	}

    return 0;
}

