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
	std::cout << "�п�J��ӼƦr�G" << std::endl;
	std::cin >> num1 >> num2;

	Calculator calc(num1, num2);

	std::cout << "�[�k���G�G" << calc.add() << std::endl;
	std::cout << "��k���G�G" << calc.substract() << std::endl;
	std::cout << "���k���G�G" << calc.multiply() << std::endl;
	std::cout << "���k���G�G" << calc.divide() << std::endl;

	system("PAUSE");

	return 0;
}