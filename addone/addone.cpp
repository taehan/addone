// addone.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

