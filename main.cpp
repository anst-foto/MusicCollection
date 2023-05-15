#include <iostream>
#include <vector>

/*#include "./lib/models/Track.h"
#include "./lib/models/Artist.h"
#include "./lib/models/Album.h"*/

#include "./lib/models.h"

#include "./lib/ConsoleHelper.h"

using namespace std;

int main() {
    Track* track_1 = new Track();
    track_1->title = "Track 1";
    track_1->duration = 1000;
    track_1->genres.push_back("Genre 1");

    Track* track_2 = new Track();
    track_2->title = "Track 2";
    track_2->duration = 2000;
    track_2->genres.push_back("Genre 1");

    Album* album_1 = new Album();
    album_1->title = "Album 1";
    album_1->tracks.push_back(track_1);
    album_1->tracks.push_back(track_2);

/*    track_1->albums.push_back(album_1);
    track_2->albums.push_back(album_1);*/

    Artist* artist_1 = new Artist();
    artist_1->name = "Artist 1";
/*    artist_1->tracks.push_back(track_1);
    artist_1->tracks.push_back(track_2);
    artist_1->albums.push_back(album_1);*/

    track_1->artists.push_back(artist_1);
    track_2->artists.push_back(artist_1);

    album_1->artists.push_back(artist_1);

    //
    vector<Track*> tracks;
    vector<Artist*> artists;
    vector<Album*> albums;

    tracks.push_back(track_1);
    tracks.push_back(track_2);

    albums.push_back(album_1);

    artists.push_back(artist_1);

    for (auto artist : artists) {
        PrintArtist(artist);
    }

    for (auto album : albums) {
        PrintAlbum(album);
    }

    for (auto track : tracks) {
        PrintTrack(track);
    }

    return 0;
}
