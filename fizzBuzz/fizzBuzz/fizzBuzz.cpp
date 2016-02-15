// fizzBuzz.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

int main(int argc, char *argv[], char *envp[])
{
	int startValue = std::atoi(argv[1]);
	int endValue = std::atoi(argv[2]);

	if (endValue < startValue) {
		std::cout << "End value should be set greater than start value..." << std::endl;
		return 0;
	}

	std::cout << "Start [" << startValue << "] to [" << endValue << "]" << std::endl;

	Judgement* judge = new Judgement();

	for (int i = startValue; i < endValue; i++) {
		if (judge->isFizzBuzz(i)) {
			std::cout << "fizzbuzz" << std::endl;
		}
		else if (judge->isBuzz(i)) {
			std::cout << "buzz" << std::endl;
		}
		else if (judge->isFizz(i)){
			std::cout << "fizz" << std::endl;
		} else {
			std::cout << i << std::endl;
		}
	}

	judge = nullptr;
    return 0;
}
