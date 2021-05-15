cmake_minimum_required(VERSION 3.9)

project(festlib LANGUAGES CXX)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wpedantic -fexceptions")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -Wall -Wpedantic -fexceptions")
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(external/pugixml)

add_library(${PROJECT_NAME} SHARED
    src/xml/xml_reader.cpp
    src/fest/common/refrefusjon.cpp
    src/fest/common/m30.cpp
    src/fest/common/enkeltoppforing.cpp
    src/fest/common/administreringlegemiddel.cpp
    src/fest/common/legemiddelmerkevare.cpp
    src/fest/types/sortering.cpp
    src/fest/common/legemiddel.cpp
    )

target_link_libraries(${PROJECT_NAME} PUBLIC pugixml-static)

enable_testing()

add_subdirectory(tests)


# TODO: need to add install components and version control
