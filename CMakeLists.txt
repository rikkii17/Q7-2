cmake_minimum_required(VERSION 3.10)

project(Q7-2 C)

add_executable(
    Q7-2
    main.c
    app.c
    system_app.c
    helper.c
)

target_include_directories(
    Q7-2
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)