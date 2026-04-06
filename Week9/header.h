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
    Song* songs; // dynamic array of Song objects
    int size; // number of songs currently in the playlist
    int capacity; // maximum number of songs the playlist can hold before needing to resize

public:
    Playlist(int s = 0); // capacity = default = 20 
    Playlist(const Playlist& other); // copy constructor
    Playlist& operator=(const Playlist& other); // assignment operator
    ~Playlist(); // destructor to free (deallocate) dynamic memory for the list of songs

    void addSong(int index, const Song& s); // adds a song to the playlist at the specified index
    void addSongEnd(const Song& s); // adds a song to the end of the playlist
    void removeSong(int index); // removes a song from the playlist -
    //  all songs after the removed song should be shifted left to fill the gap
    void print() const; // prints the playlist in the format: "Title by Artist (Duration seconds)"
    void resize(int new_capacity); // helper function to resize the songs array when needed
};

#endif