cmake_minimum_required(VERSION 3.21)
project(LLAutoUpdate)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/x64/)

add_definitions(-D"NDEBUG" -D"LLAUTOUPDATE_EXPORTS" -D"_WINDOWS" -D"_USRDLL" -D"_WINDLL" -D"_UNICODE" -D"UNICODE")

add_compile_options(
        /permissive- /MP /GS /GL /W3 /Gy /Zc:wchar_t /Zi /Gm- /sdl /Zc:inline /fp:precise /errorReport:prompt /WX-
        /Zc:forScope /Gd /Oi /MD /std:c++17 /FC /EHsc /nologo /diagnostics:column /utf-8
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT /DEBUG /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO /SUBSYSTEM:WINDOWS
        /MANIFESTUAC:NO /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /TLBID:1
)

include_directories(${LiteLoader_SOURCE_DIR}/Header/)
include_directories(${LiteLoader_SOURCE_DIR}/Header/third-party)

link_directories(${LiteLoader_SOURCE_DIR}/Lib/third-party)
link_directories(${CMAKE_SOURCE_DIR}/x64/Release/)

add_library(LLAutoUpdate SHARED dllmain.cpp LLUpdate.cpp)
target_link_libraries(LLAutoUpdate LiteLoader)
