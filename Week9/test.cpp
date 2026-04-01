#include "header.h"
#include <iostream>
using namespace std;

int main() {
    // Create some songs
    Song s1("Song A", "Artist 1", 180);
    Song s2("Song B", "Artist 2", 200);
    Song s3("Song C", "Artist 3", 220);

    // Create playlist
    Playlist p1(3);

    // Add songs
    p1.setSong(0, s1);
    p1.setSong(1, s2);
    p1.setSong(2, s3);

    // Print original playlist
    cout << "Original Playlist:\n";
    p1.print();

    // Test copy constructor
    Playlist p2 = p1;
    cout << "\nCopied Playlist (copy constructor):\n";
    p2.print();

    // Modify p2 to test deep copy
    Song s4("NEW SONG", "NEW ARTIST", 999);
    p2.setSong(0, s4);

    cout << "\nAfter modifying p2:\n";
    cout << "p1:\n";
    p1.print();
    cout << "p2:\n";
    p2.print();

    // Test assignment operator
    Playlist p3;
    p3 = p1;

    cout << "\nAssigned Playlist (operator=):\n";
    p3.print();

    return 0;
}