//
// Created by JEK on 3/25/2019.
//
#include <cstdlib>
#include <string>

#ifndef UTPOD_SONG_H
#define UTPOD_SONG_H

using namespace std;

class Song {

private:
    string artist;
    string title;
    int size;

public:
    Song();

    Song(string artist, string title, int size);

    string getArtist() const;

    void setArtist(string name);

    string getTitle() const;

    void setTitle(string name);

    int getSize() const;

    void setSize(int s);

};




#endif //UTPOD_SONG_H
