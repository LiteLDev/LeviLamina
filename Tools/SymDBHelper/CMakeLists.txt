cmake_minimum_required(VERSION 3.21)
project(SymDBHelper)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

add_definitions(-D"NDEBUG" -D"_LIB" -D"_UNICODE" -D"UNICODE")

add_compile_options(
        /permissive- /GS /GL /W3 /Gy /Zc:wchar_t /Gm- /O2 /sdl /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /FC /diagnostics:column /utf-8
)

add_library(SymDBHelper STATIC SymDBHelper.cpp)
target_link_libraries(SymDBHelper Demangler)

add_custom_command(
        TARGET SymDBHelper POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:SymDBHelper> ${CMAKE_BINARY_DIR}/sdk/lib/
        COMMENT "Copying lib to sdk directory"
        VERBATIM
)
