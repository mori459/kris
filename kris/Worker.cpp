#include "Worker.hpp"

class Worker
{
public:
	Worker(std::string set_full_name = "", int set_exp = 0, double set_hourly_payment = 0 ,double set_total_hours = 0)
	{
		full_name = set_full_name;
		exp = set_exp;
		hourly_payment = set_hourly_payment;
		total_hours = set_total_hours;
	}
	void SetInfo()
	{
		std::cout << "������� ������ ���: ";
		std::cin >> full_name;
		std::cout << "������� ����: ";
		std::cin >> exp;
		std::cout << "������� �� � ���: ";
		std::cin >> hourly_payment;
		std::cout << "������� ���-�� ������������ ������: ";
		std::cin >> total_hours;
	}

	double TotalPayment()
	{
		double bonus;
		if (exp < 1)
		{
			bonus = 0;
		}
		else if (exp < 3)
		{
			bonus = 0.05;
		}
		else if (exp < 5)
		{
			bonus = 0.08;
		}
		else
		{
			bonus = 0.15;
		}
		return (hourly_payment * total_hours) * (1 + bonus);
	}

	void PrintInfo()
	{
		std::cout << "������ ���: " << full_name << '\n';
		std::cout << "���� (���): " << exp << '\n';
		std::cout << "�������� (� ���): " << hourly_payment << '\n';
		std::cout << "����� ����� �����������: " << total_hours << '\n';
		system("pause");
	}
private:
	std::string full_name = "";
	int exp = 0;
	double hourly_payment = 0;
	double total_hours = 0;
};