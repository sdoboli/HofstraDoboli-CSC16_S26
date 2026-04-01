#ifndef HEADER_H
#define HEADER_H

#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;
    int duration;

public:
    Song();
    Song(string t, string a, int d);

    string getTitle() const;
    string getArtist() const;
    int getDuration() const;
};

class Playlist {
private:
    Song* songs;
    int size;

public:
    Playlist(int s = 0);
    Playlist(const Playlist& other); 
    Playlist& operator=(const Playlist& other);
    ~Playlist();

    void setSong(int index, const Song& s);
    void print() const;
};

#endif