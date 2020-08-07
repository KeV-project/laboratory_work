#include "Film.h"

Film* MakeFilm(string title, int duration, int year, GenreType genre,
	float rating, float budget, string director, string mainRole)
{
	Film* film = new Film();
	film->Title = title;
	film->Duration = duration;
	film->Year = year;
	film->Genre = genre;
	film->Rating = rating;
	film->Budget = budget;
	film->Director = director;
	film->MainRole = mainRole;
	return film;
}

Film* CopyFilm(Film& film)
{
	Film* copiedFilm = new Film();
	copiedFilm->Title = film.Title;
	copiedFilm->Duration = film.Duration;
	copiedFilm->Year = film.Year;
	copiedFilm->Genre = film.Genre;
	copiedFilm->Rating = film.Rating;
	copiedFilm->Budget = film.Budget;
	copiedFilm->Director = film.Director;
	copiedFilm->MainRole = film.MainRole;
	return copiedFilm;
}

void ReadFilm(Film& film)
{
	cout << "������� �������� ������: ";
	cin >> film.Title;
	cout << endl;
	cout << "������� ����������������� ������(���): ";
	cin >> film.Duration;
	cout << endl;
	cout << "������� ��� ������� ������: ";
	cin >> film.Year;
	cout << endl;
	int numGenre;
	cout << "������� ���� ������";
	cout << "(0 - �������, 1 - �����, 2 - �������, " << endl;
	cout << "3 - �����, 4 - ����� ������, 5 - ����������): ";
	cin >> numGenre;
	ReadGenre(numGenre, film.Genre);
	cout << endl;
	cout << "������� ������� ������(���. �): ";
	cin >> film.Rating;
	cout << endl;
	cout << "������� ������ �����a(���): ";
	cin >> film.Budget;
	cout << endl;
	cout << "������� ��� ���������: ";
	cin >> film.Director;
	cout << endl;
	cout << "������� ������, ��������� ������� ����: ";
	cin >> film.MainRole;
	cout << endl;
}

void PrintFilm(Film& film)
{
	cout << "��������: " << film.Title << endl;
	cout << "�����������������: " << film.Duration << endl;
	cout << "��� �������: " << film.Year << endl;
	cout << "����: " << PrintGenre(film.Genre) << endl;
	cout << "�������: " << film.Rating << endl;
	cout << "������: " << film.Budget << endl;
	cout << "��������: " << film.Director << endl;
	cout << "� ������� ����: " << film.MainRole << endl << endl;
}

void ChangeFilm(Film* film, string title, int duration,
	int year, GenreType genre, float rating, float budget,
	string director, string mainRole)
{
	film->Title = title;
	film->Duration = duration;
	film->Year = year;
	film->Genre = genre;
	film->Rating = rating;
	film->Budget = budget;
	film->Director = director;
	film->MainRole = mainRole;
}

void DemoFilm()
{
	// Task 2.2.3.1
	Film firstFilm;
	firstFilm.Title = "Focus";
	firstFilm.Duration = 104;
	firstFilm.Year = 2015;
	firstFilm.Genre = Drama;
	firstFilm.Rating = 8.2;
	firstFilm.Budget = 50.1;
	firstFilm.Director = "Glenn Ficarra, John Recua";
	firstFilm.MainRole = "Will Smith";

	// Task 2.2.3.2
	Film secondFilm;
	cout << "�����" << endl << endl;
	ReadFilm(secondFilm);
	PrintFilm(secondFilm);
	PrintLine();
	
	// Task 2.2.3.3
	const int filmsCount = 3;
	Film** films = new Film * [filmsCount]
	{
		MakeFilm("�����", 109, 2011, Thriller, 7.3, 40, "����� ������", "������� ����������"),
		MakeFilm("� - �������", 115, 2007, Horror, 7.9, 150, "������� �������", "���� ����"),
		MakeFilm("������ ����", 43, 2004, Drama, 8.8, 4.4, "���� ������", "��� ����"),
	};
	cout << "������ �������: " << endl << endl;
	for (int i = 0; i < filmsCount; i++)
	{
		cout << "����� �" << i + 1 << ":" << endl << endl;
		PrintFilm(*films[i]);
	}
	PrintLine();
	for (int i = 0; i < filmsCount; i++)
	{
		delete films[i];
	}
	delete[] films;

	// Task 2.2.4.1
	cout << "������ � ���������� �� ���������:" << endl << endl;
	Film* pFirstFilm = &firstFilm;
	cout << "����� firstFilm: " << endl << endl;
	PrintFilm(firstFilm);
	cout << "���������� ����� firstFilm: " << endl << endl;
	ChangeFilm(pFirstFilm, "������ ���������", 139, 2010,
		Thriller, 8.5, 80, "������ ��������", "�������� �� ������");
	PrintFilm(*pFirstFilm);
	PrintLine();

	// Task 2.2.4.2
	Film* pFirstFilm2 = &firstFilm;
	cout << "����� ���������� firstFilm: ";
	cout << &firstFilm << endl << endl;
	cout << "����� � ��������� pFirstFilm: ";
	cout << pFirstFilm << endl << endl;
	cout << "����� � ��������� pFirstFilm2: ";
	cout << pFirstFilm2 << endl << endl;
	PrintLine();
}