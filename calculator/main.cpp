#include <iostream>


class Calculator {
private:
	int num1;
	int num2;
public:
	Calculator(int n1, int n2) {
		this->num1 = n1;
		this->num2 = n2;
	}

	int add() {
		return num1 + num2;
	}

	int substract() {
		return num1 - num2;
	}

	int multiply() {
		return num1 * num2;
	}

	int divide() {
		if (num2 != 0) {
			return num1 / num2;
		}
		else {
			return 0;
		}
	}
};

int main() {
	int num1, num2;
	std::cout << "請輸入兩個數字：" << std::endl;
	std::cin >> num1 >> num2;

	Calculator calc(num1, num2);

	std::cout << "加法結果：" << calc.add() << std::endl;
	std::cout << "減法結果：" << calc.substract() << std::endl;
	std::cout << "乘法結果：" << calc.multiply() << std::endl;
	std::cout << "除法結果：" << calc.divide() << std::endl;

	system("PAUSE");

	return 0;
}