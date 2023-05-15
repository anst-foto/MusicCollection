#ifndef MUSICCOLLECTION_CONSOLEHELPER_H
#define MUSICCOLLECTION_CONSOLEHELPER_H

#include <iostream>

#include "models/Track.h"
#include "models/Artist.h"
#include "models/Album.h"

using namespace std;

void PrintTrack(Track* track) {
    cout << "*** " << track->title << " ***" << endl;
    cout << "* Duration : " << track->duration << " *" << endl;

    cout << "* ";
    for (auto artist : track->artists) {
        cout << artist->name << ";";
    }
    cout << "*" << endl;
/*
    cout << "* ";
    for (auto album : track->albums) {
        cout << album->title << ";";
    }
    cout << "*" << endl;*/

    cout << "* ";
    for (auto genre : track->genres) {
        cout << genre << ";";
    }
    cout << "*" << endl;

    cout << "*** " << "***" << " ***" << endl;
}

void PrintArtist(Artist* artist) {
    cout << "*** " << artist->name << " ***" << endl;

    /*cout << "* ";
    for (auto track : artist->tracks) {
        cout << track->title << ";";
    }
    cout << "*" << endl;

    cout << "* ";
    for (auto album : artist->albums) {
        cout << album->title << ";";
    }
    cout << "*" << endl;

    cout << "* ";
    for (auto genre : artist->genres) {
        cout << genre << ";";
    }
    cout << "*" << endl;*/

    cout << "*** " << "***" << " ***" << endl;
}

void PrintAlbum(Album* album) {
    cout << "*** " << album->title << " ***" << endl;

    cout << "* ";
    for (auto artist : album->artists) {
        cout << artist->name << ";";
    }
    cout << "*" << endl;

    cout << "* ";
    for (auto track : album->tracks) {
        cout << track->title << ";";
    }
    cout << "*" << endl;

/*    cout << "* ";
    for (auto genre : album->genres) {
        cout << genre << ";";
    }
    cout << "*" << endl;*/

    cout << "*** " << "***" << " ***" << endl;
}

#endif //MUSICCOLLECTION_CONSOLEHELPER_H
