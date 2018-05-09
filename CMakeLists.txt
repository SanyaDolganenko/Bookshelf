cmake_minimum_required(VERSION 3.9)
project(BookShelf)

set(CMAKE_CXX_STANDARD 11)

add_executable(BookShelf main.cpp Book.h IntegerUtils.cpp IntegerUtils.h Bookshelf.h)