add_subdirectory(external/Catch2)

add_executable(tests
    main.cpp
    xml_reader.cpp
    )

target_link_libraries(tests PRIVATE festlib Catch2::Catch2WithMain)

