#include "DemoWorkingWithClasses.h"

int DemoWorkingWithClasses::FindBookByAuthor(Book* books, const int booksCount, const string& findedAuthor)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].GetAuthorsCount(); j++)
		{
			if (books[i].GetAuthors()[j] == findedAuthor)
			{
				return i;
			}
		}
	}
	return -1;
}

void DemoWorkingWithClasses::DemoBook()
{
	// Task 3.2.4
	const int booksCount = 5;
	Book* books = new Book [booksCount];
	cout << "��������� ������ �� 5 ����:" << endl << endl;
	for (int i = 0; i < booksCount; i++)
	{
		cout << "����� �" << i + 1 << ":" << endl << endl;
		books[i].ReadBookFromConsole();
	}
	cout << "������ ����:" << endl << endl;
	for (int i = 0; i < booksCount; i++)
	{
		cout << "����� �" << i + 1 << ": ";
		books[i].WriteBookToConsole();
	}
	PrintLine();

	// Task 3.2.5
	cout << "������� ������ ��� ������ �����: ";
	string findedAuthor = "";
	cin >> findedAuthor;
	cout << endl;
	int findedBookIndex = FindBookByAuthor(books, booksCount, findedAuthor);
	if (findedBookIndex == -1)
	{
		cout << "����� " << findedAuthor << " ��� � �������" << endl << endl;
	}
	else
	{
		cout << "����� ������: ";
		books[findedBookIndex].WriteBookToConsole();
	}

	delete[] books;

	PrintLine();
}

int DemoWorkingWithClasses::FindRouteTo(Route* routes, const int routesCount, const string& findedStop)
{
	for (int i = 0; i < routesCount; i++)
	{
		for (int j = 0; j < routes[i].GetStopsCount(); j++)
		{
			if (routes[i].GetStops()[j] == findedStop)
			{
				return i;
			}
		}
	}
	return -1;
}

void DemoWorkingWithClasses::DemoRoute()
{
	const int routesCount = 5;
	Route* routes = new Route[routesCount];
	cout << "��������� ������ �� 5 ������:" << endl << endl;
	for (int i = 0; i < routesCount; i++)
	{
		cout << "���� �" << i + 1 << ":" << endl << endl;
		routes[i].ReadRouteFromConsole();
	}
	cout << "������ ������:" << endl << endl;
	for (int i = 0; i < routesCount; i++)
	{
		routes[i].WriteRouteToConsole();
	}
	PrintLine();

	cout << "������� ��������� ��� ������ �����: ";
	string findedStop = "";
	cin >> findedStop;
	cout << endl;
	int findedRouteIndex = FindRouteTo(routes, routesCount, findedStop);
	if (findedRouteIndex == -1)
	{
		cout << "�� ���������� ����� � ���������� " << findedStop << endl << endl;
	}
	else
	{
		cout << "����, ���������� ��������� " << findedStop << endl << endl;
		routes[findedRouteIndex].WriteRouteToConsole();
	}

	delete[] routes;

	PrintLine();
}

void DemoWorkingWithClasses::WriteRectangles(Rectangle* rectangles, const int rectanglesCount)
{
	cout << "������ ���������������:" << endl << endl;
	for (int i = 0; i < rectanglesCount; i++)
	{
		cout << "������������� �" << i + 1 << ": " << endl;
		rectangles[i].WriteRectangle();
	}
}

float DemoWorkingWithClasses::GetMeanCenterX(Rectangle* rectangles, const int rectanglesCount)
{
	float sumCenterX = 0.0;
	for (int i = 0; i < rectanglesCount; i++)
	{
		sumCenterX += rectangles[i].GetCenterX();
	}
	return sumCenterX / rectanglesCount;
}

float DemoWorkingWithClasses::GetMeanCenterY(Rectangle* rectangles, const int rectanglesCount)
{
	float sumCenterY = 0.0;
	for (int i = 0; i < rectanglesCount; i++)
	{
		sumCenterY += rectangles[i].GetCenterY();
	}
	return sumCenterY / rectanglesCount;
}

void DemoWorkingWithClasses::DemoRectangleWithPoint()
{
	// Task 3.3.3 - 3.3.4
	const int rectanglesCount = 5;
	Rectangle* rectangles = new Rectangle[rectanglesCount];
	rectangles[0].ChangeRectangle(15.5, 13.6, -2, 3);
	rectangles[1].ChangeRectangle(7.3, 5.4, 6, 1);
	rectangles[2].ChangeRectangle(19.0, 12.5, 15, -9);
	rectangles[3].ChangeRectangle(8.2, 7.0, -10, 10);
	rectangles[4].ChangeRectangle(4.7, 2.5, 0.0, 0.0);

	WriteRectangles(rectangles, rectanglesCount);

	PrintLine();

	// Task 3.3.5
	cout << "meanCenterX: " << GetMeanCenterX(rectangles, rectanglesCount) << endl << endl;
	cout << "meanCenterY: " << GetMeanCenterY(rectangles, rectanglesCount) << endl << endl;

	PrintLine();

	delete[] rectangles;
}
