#include <cstdio>

enum class Operation
{
	Add,
	Substract,
	Multiply,
	Divide
};

struct Calculator
{
	private: 
	Operation operation;

	public:
	Calculator(Operation operation)
	{
		this->operation = operation;
	}

	int calculate(int a, int b)
	{
		switch (operation)
		{
		case Operation::Add:
			{
				return a + b;
			}
			break;
		case Operation::Substract:
			{
				return a - b;
			}
			break;
		case Operation::Multiply:
			{
				return a * b;
			}
			break;
		case Operation::Divide:
			{
				return a / b;
			}
			break;
		default:
			{
				printf("Invalid operation");
			}
			break;
		}
	}
};

int main()
{
	Calculator add(Operation::Add);
	Calculator substract(Operation::Substract);
	Calculator multiply(Operation::Multiply);
	Calculator divide(Operation::Divide);

	printf("The sum of 10 and 5 is: %d\n", add.calculate(10, 5));
	printf("The difference of 10 and 5 is: %d\n", substract.calculate(10, 5));
	printf("The product of 10 and 5 is: %d\n", multiply.calculate(10, 5));
	printf("The quotient of 10 and 5 is: %d\n", divide.calculate(10, 5));
}