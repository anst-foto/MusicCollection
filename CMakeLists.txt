cmake_minimum_required(VERSION 3.23)
project(MusicCollection)

set(CMAKE_CXX_STANDARD 17)

add_executable(MusicCollection main.cpp lib/models/Track.h lib/models/Artist.h lib/models/Album.h lib/ConsoleHelper.h lib/models.h)
