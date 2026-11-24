cmake_minimum_required(VERSION 3.16)
project(oc-multi-account CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ocmultiaccount
    src/main.cpp
    src/accounts.cpp
    src/trials.cpp
    src/keeper.cpp
)

target_include_directories(ocmultiaccount PRIVATE include)

if(WIN32)
    target_link_libraries(ocmultiaccount PRIVATE userenv)
endif()
