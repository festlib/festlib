add_subdirectory(external/Catch2)

add_executable(tests
    main.cpp
    xml_reader.cpp
    )

target_link_libraries(tests PRIVATE festlib Catch2::Catch2WithMain)

configure_file(${CMAKE_SOURCE_DIR}/resources/fest251_inst.xml ${CMAKE_BINARY_DIR}/tests/ COPYONLY)

add_test(NAME tests COMMAND ${CMAKE_BINARY_DIR}/tests/tests)
