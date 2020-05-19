cmake_minimum_required(VERSION 3.17)
project(magic)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS_RELEASE "-march=native -mtune=native -O3 -mmmx -msse -msse2 -msse3 -pedantic -Wextra -Wshadow -Wnon-virtual-dtor -Wdelete-non-virtual-dtor -fgraphite-identity -floop-nest-optimize -fdevirtualize-at-ltrans -fipa-pta -fno-semantic-interposition -flto=9 -fuse-linker-plugin -pipe -falign-functions=32")

set(CMAKE_VERBOSE_MAKEFILE ON)

find_package(fmt REQUIRED)
find_package(mp++ REQUIRED)

add_executable(magic main.cpp)

target_link_libraries(magic fmt::fmt mp++::mp++)
