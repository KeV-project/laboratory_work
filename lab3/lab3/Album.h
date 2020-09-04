#pragma once
#include <string>
#include <string>
#include "MakeMessage.h"
#include "Song.h"
using namespace std;

class Album
{
private:
	string _name;
	int _year;
	int _songsCount;
	Song* _songs;

public:
	void SetName(const string& name);
	void SetYear(const int year);
	void SetSongs(Song* songs, const int songsCount);

	string GetName();
	int GetYear();
	int GetSongsCount();
	Song* GetSongs();

	Album();
	Album(const string& name, const int year,
		Song* songs, const int songsCount);

	~Album();

	string GetInformationAboutSong();
};

