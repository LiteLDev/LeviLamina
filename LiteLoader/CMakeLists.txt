cmake_minimum_required(VERSION 3.21)
project(LiteLoader)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/x64/)

set(TARGET_DIR ${CMAKE_SOURCE_DIR}/x64/Release/)

file(GLOB_RECURSE SRC_FILES
        ${PROJECT_SOURCE_DIR}/Lib/*.cpp
        ${PROJECT_SOURCE_DIR}/Lib/*.hpp
        ${PROJECT_SOURCE_DIR}/Lib/*.h
        ${PROJECT_SOURCE_DIR}/Header/*.cpp
        ${PROJECT_SOURCE_DIR}/Header/*.hpp
        ${PROJECT_SOURCE_DIR}/Header/*.h
        ${PROJECT_SOURCE_DIR}/Kernel/*.cpp
        ${PROJECT_SOURCE_DIR}/Kernel/*.hpp
        ${PROJECT_SOURCE_DIR}/Kernel/*.h
        ${PROJECT_SOURCE_DIR}/Main/*.cpp
        ${PROJECT_SOURCE_DIR}/Main/*.hpp
        ${PROJECT_SOURCE_DIR}/Main/*.h
        )

add_definitions(-DUNICODE -DNDEBUG -DLITELOADER_EXPORTS -DWIN32_LEAN_AND_MEAN
        -DCPPHTTPLIB_OPENSSL_SUPPORT -D_CRT_SECURE_NO_WARNINGS -D_WINDOWS
        -D_USRDLL -D_AMD64_ -DNOMINMAX -D__cpp_lib_char8_t)

add_compile_options(
        /permissive /MP /GS /GL /W0 /Gy /Zc:wchar_t /Zi /Gm- /sdl /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /std:c++20 /FC /EHa /nologo
        /diagnostics:column /utf-8
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT /DEBUG /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO /SUBSYSTEM:WINDOWS
        /MANIFESTUAC:NO /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /DELAYLOAD:"bedrock_server.dll" /TLBID:1
)

include_directories(${PROJECT_SOURCE_DIR}/)
include_directories(${PROJECT_SOURCE_DIR}/Header)
include_directories(${PROJECT_SOURCE_DIR}/Header/third-party)
include_directories(${CMAKE_SOURCE_DIR})

link_directories(.)
link_directories(${PROJECT_SOURCE_DIR}/../x64/Release/)

add_library(LiteLoader SHARED ${SRC_FILES} Resource/LiteLoader.rc)

add_library(sqlitecpp STATIC IMPORTED)
set_property(TARGET sqlitecpp PROPERTY IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/SQLiteCpp/SQLiteCpp.lib")
add_library(sqlite3 STATIC IMPORTED)
set_property(TARGET sqlite3 PROPERTY IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/SQLiteCpp/sqlite3.lib")
add_library(base64 STATIC IMPORTED)
set_property(TARGET base64 PROPERTY IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/Header/third-party/cpp-base64/lib/cpp-base64.lib")

target_link_libraries(LiteLoader base64 sqlitecpp sqlite3
        "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/openssl/libcrypto.lib"
        "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/openssl/libssl.lib"
        "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/leveldb/leveldb.lib")
