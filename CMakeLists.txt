cmake_minimum_required (VERSION 3.0)

project (MyProject)

set(Sources
    main.cpp)

include_directories(./deps)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Wold-style-cast -Wcast-align -Wunused -Woverloaded-virtual -Weffc++ -Wconversion")

add_executable(MyProject ${Sources})
