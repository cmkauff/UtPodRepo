


#include <iostream>
#include "Song.h"
#include "UtPodDriver.h"
#include "UtPod.h"
#include "string.h"


using namespace std;

Song::Song(){
    artist = "";
    title = "";
    size = 0;
}

Song::Song(string _artist, string _title, int _size){
    artist = _artist;
    title = _title;
    size = _size;
}

string Song::getArtist() const{
    return artist;
}

void Song::setArtist(string name){
    artist = name;
}

string Song::getTitle() const{
    return title;
}

void Song::setTitle(string name){
    title = name;
}

int Song::getSize() const{
    return size;
}

void Song::setSize(int s){
    size = s;
}

void Song::swap(Song &s2){
    Song temp = s2;
    s2 = *this;
    *this = temp;
}