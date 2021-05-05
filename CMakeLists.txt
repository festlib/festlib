cmake_minimum_required(VERSION 3.9)

project(festlib LANGUAGES CXX)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wpedantic -fexceptions")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -Wall -Wpedantic -fexceptions")
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(external/pugixml)

add_library(${PROJECT_NAME} STATIC
    src/xml/xml_reader.cpp
    )

target_link_libraries(${PROJECT_NAME} PUBLIC pugixml-static)

add_subdirectory(tests)

add_test(NAME testfestlib COMMAND tests/tests)

# TODO: need to add install components and version control
