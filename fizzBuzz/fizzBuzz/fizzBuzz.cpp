// fizzBuzz.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

int main(int argc, char *argv[], char *envp[])
{
	int startValue = std::atoi(argv[1]);
	int endValue = std::atoi(argv[2]);

	if (endValue < startValue) {
		std::cout << "End value should be set less than start value..." << std::endl;
		return 0;
	}

	std::cout << "Start [" << startValue << "] to [" << endValue << "]" << std::endl;

	for (int i = startValue; i < endValue; i++) {

		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "fizzbuzz" << std::endl;
		}
		else if(i%3 == 0){
			std::cout << "fizz" << std::endl;
		}
		else if (i % 5 == 0) {
			std::cout << "buzz" << std::endl;
		}
		else {
			std::cout << i << std::endl;
		}
	}
    return 0;
}
