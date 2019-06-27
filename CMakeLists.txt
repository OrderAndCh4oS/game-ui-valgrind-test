cmake_minimum_required(VERSION 3.14)
project(allegro_valgrind_test)

set(game_VERSION_MAJOR 0)
set(game_VERSION_MINOR 1)

set(CMAKE_CXX_STANDARD 17)


set(
        game_SRCS
        main.cpp
        main.h
        settings/Resolution.cpp
        settings/Resolution.h
        constants/colour.h
        constants/colour.cpp
        exceptions/InitError.cpp
        exceptions/InitError.h
        initialisers/InitConstants.cpp
        initialisers/InitConstants.h
        utilities/user-interface/Panel.cpp
        utilities/user-interface/Panel.h
        utilities/colour/Colour.cpp
        utilities/colour/Colour.h
        utilities/colour/ColourGroup.h
        utilities/user-interface/Box.cpp
        utilities/user-interface/Box.h
        utilities/user-interface/Button.cpp
        utilities/user-interface/Button.h
        utilities/user-interface/TextBox.cpp
        utilities/user-interface/TextBox.h
        utilities/font/Font.cpp
        utilities/font/Font.h
        utilities/font/FontStyle.cpp
        utilities/font/FontStyle.h
        utilities/geometry/Point.cpp
        utilities/geometry/Point.h
        utilities/image/ImageCollection.cpp
        utilities/image/ImageCollection.h
        utilities/image/Image.cpp
        utilities/image/Image.h
        utilities/primitives/Rect.cpp
        utilities/primitives/Rect.h
        utilities/colour/ColourGroup.cpp
)

add_executable(allegro-valgrind-test ${game_SRCS})

set(
        game_LIBS
)

target_link_libraries(allegro-valgrind-test ${game_LIBS})

if (NOT ${PROJECT_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_BINARY_DIR})
    file(COPY "${PROJECT_SOURCE_DIR}/resources" DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
endif()


