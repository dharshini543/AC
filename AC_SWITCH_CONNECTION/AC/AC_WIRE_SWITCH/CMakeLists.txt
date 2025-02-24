cmake_minimum_required(VERSION 3.16)

project(AC_WIRE_SWITCH LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AC_WIRE_SWITCH main.cpp
    AC.h AC.cpp
    Switch.h Switch.cpp
    Polycab_wire.h Polycab_wire.cpp
    Finolex_wire.h Finolex_wire.cpp
    Havels_wire.h Havels_wire.cpp)

include(GNUInstallDirs)
install(TARGETS AC_WIRE_SWITCH
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
