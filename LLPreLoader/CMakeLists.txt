cmake_minimum_required(VERSION 3.21)
project(LLPreLoader)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

add_definitions(-D"NDEBUG" -D"_WINDOWS" -D"_USRDLL" -D"_WINDLL" -D"_UNICODE" -D"UNICODE")

include_directories(${LiteLoader_SOURCE_DIR}/Header/)
include_directories(${LiteLoader_SOURCE_DIR}/Header/third-party)

add_compile_options(
        /permissive- /GS /GL /W0 /Gy /Zc:wchar_t /Zi /Gm- /O2 /sdl /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /FC /EHsc /nologo /diagnostics:column
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT /DEBUG /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO
        /SUBSYSTEM:WINDOWS /MANIFESTUAC:NO /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /TLBID:1
)

link_directories(${CMAKE_SOURCE_DIR}/x64/Release/)

aux_source_directory(../LiteLoader/Lib/third-party/rawpdb DIR_LIB_SRCS)
add_library(LLPreLoader SHARED dllmain.cpp SymDB.cpp PreLoader.cpp Utils.cpp ${DIR_LIB_SRCS})
target_link_libraries(LLPreLoader SymDBHelper Demangler
        "${CMAKE_SOURCE_DIR}/LiteLoader/Lib/third-party/detours/detours.lib")
