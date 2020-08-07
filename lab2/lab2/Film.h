#pragma once

#include <iostream>
#include "Output.h"
#include "GenreType.h"

using namespace std;

struct Film
{
	string Title;
	int Duration;
	int Year;
	GenreType Genre;
	float Rating;
	// ������ ������ � ���������
	float Budget;
	string Director;
	string MainRole;
};

Film* MakeFilm(string title, int duration, int year, GenreType genre,
	float rating, float budget, string director, string mainRole);
void ReadFilm(Film& film);
void PrintFilm(Film& film);
void ChangeFields(Film* film, string title, int duration,
	int year, GenreType genre, float rating, float budget,
	string director, string mainRole);
void DemoFilm();