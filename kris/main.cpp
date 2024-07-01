#include "Worker.hpp"
#include <vector>

//std::vector<int> worker_id{};
std::vector<Worker> worker_list{};

void MainMenu();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	MainMenu();


	
	return 0;
}


void MainMenu()
{
	char menu_choice;
	while (true)
	{
		do
		{
			//system("cls");
			std::cout << "1) Новый работник\n2) Ввести информацию в файл3) Вывести информацию о работнике\n4) Выход\n";
			std::cin >> menu_choice;
		} while (menu_choice < '1' || menu_choice > '4');
		if (menu_choice == '4')
		{
			break;
		}
		else if (menu_choice == '1')
		{
			worker_list[worker_list.size() + 1].SetInfo();
		}
		else if (menu_choice)
		{

		}
	}
}

