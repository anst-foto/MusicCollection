#ifndef MUSICCOLLECTION_MODELS_H
#define MUSICCOLLECTION_MODELS_H

#include <vector>
#include <string>

using namespace std;

struct Artist {
    string name;
};

struct Track {
    string title;
    int duration;
    vector<Artist*> artists;
    vector<string> genres;
};

struct Album {
    string title;
    vector<Track*> tracks;
    vector<Artist*> artists;
};



#endif //MUSICCOLLECTION_MODELS_H
