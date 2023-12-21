/* 
Создайте C++ - проект в Visual Studio(консольное приложение).
1. Создайте класс, полями которого будут имя игрока и количество набранных этим игроком очков.

2. Узнайте у пользователя, сколько игроков он хочет добавить, и создайте динамический массив необходимого размера.
   Получите от пользователя имена игроков и набранные ими очки и сохраните в массиве.

3. Отсортируйте массив по убыванию количества очков, набранных игроками.

4. Выведите все имена и очки игроков в отсортированном виде.
*/

#include <iostream>



class Scores {
private:
	std::string name;
	int scores;
public:
	Scores(std::string p_name = "Alex", int p_scores = 35) :name(p_name), scores(p_scores) {};

	void SetName(std::string p_name) {
		name = p_name;
	}

	void SetScores(int p_scores) {
		scores = p_scores;
	}

	int GetScores()const {
		return scores;
	}

	void Show()const {
		std::cout << name << "....." << scores << std::endl;
	}
};

void bubbleSort(Scores list[], int listLength)
{
	while (listLength--)
	{
		bool swapped = false;

		for (int i = 0; i < listLength; i++)
		{
			if (list[i].GetScores() < list[i + 1].GetScores())
			{
				std::swap(list[i], list[i + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}

int main()
{
	int numberOfPlayers = 0;
	std::cout << "Enter the number of players: ";
	std::cin >> numberOfPlayers;
	while(numberOfPlayers <= 0 || isalpha) {		
		std::cin.clear();		
		std::cin.ignore();
		std::cout << "\nEnter the number of players: ";
		std::cin >> numberOfPlayers;
	}

	Scores *arr = new Scores[numberOfPlayers];
	
	//Заполнение массива данными
	for (int i = 0; i < numberOfPlayers; ++i) {
		std::string name;
		int scores = 0;
		int player = i + 1;
		std::cout << "Enter name of player " << player << ": ";
		std::cin >> name;
		arr[i].SetName(name);
		std::cout << "Enter the points scored by the player " << player << ": ";
		std::cin >> scores;
		arr[i].SetScores(scores);
	}

	bubbleSort(arr, numberOfPlayers);

	// Вывод на экран отсортированного массива
	for (Scores *i = &arr[0]; i != (arr + numberOfPlayers); ++i) {
		i->Show();
	}
	delete[] arr;

}
