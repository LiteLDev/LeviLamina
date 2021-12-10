cmake_minimum_required(VERSION 3.21)
project(LiteLoader)

set(CMAKE_CXX_STANDARD 17)
set(TARGET_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../x64/Release)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../x64/)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../x64/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../x64/)

add_definitions(-DUNICODE -DNDEBUG -DLITELOADER_EXPORTS -DWIN32_LEAN_AND_MEAN -D_CRT_SECURE_NO_WARNINGS -D_WINDOWS -D_USRDLL -D_AMD64_ -DNOMINMAX)

file(GLOB SRC_FILES_ROOT
        ${PROJECT_SOURCE_DIR}/*.cpp
        ${PROJECT_SOURCE_DIR}/*.hpp
        ${PROJECT_SOURCE_DIR}/*.h
        )

file(GLOB_RECURSE SRC_FILES_DIR
        ${PROJECT_SOURCE_DIR}/Header/*.cpp
        ${PROJECT_SOURCE_DIR}/Header/*.hpp
        ${PROJECT_SOURCE_DIR}/Header/*.h
        ${PROJECT_SOURCE_DIR}/Kernel/*.cpp
        ${PROJECT_SOURCE_DIR}/Kernel/*.hpp
        ${PROJECT_SOURCE_DIR}/Kernel/*.h
        ${PROJECT_SOURCE_DIR}/Lib/*.cpp
        ${PROJECT_SOURCE_DIR}/Lib/*.hpp
        ${PROJECT_SOURCE_DIR}/Lib/*.h
        )

include_directories(Header)
include_directories(Header/third-party)
include_directories(.)

link_directories(.)

add_compile_options(
        /permissive
        /GS
        /GL
        /W2
        /Gy
        /Zc:wchar_t
        /Zi
        /Gm-
        /Od
        /sdl
        /Zc:inline
        /fp:precise
        /errorReport:prompt
        /WX-
        /Zc:forScope
        /Gd
        /Oi
        /MD
        /EHa
        /nologo
        /diagnostics:column
        /utf-8
)

add_link_options("/DELAYLOAD:\"bedrock_server.dll\"")

add_library(LiteLoader SHARED ${SRC_FILES_ROOT} ${SRC_FILES_DIR})

add_library(sqlitecpp STATIC IMPORTED)
set_property(TARGET sqlitecpp PROPERTY IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/SQLiteCpp/SQLiteCpp.lib")
add_library(sqlite3 STATIC IMPORTED)
set_property(TARGET sqlite3 PROPERTY IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/SQLiteCpp/sqlite3.lib")
add_library(base64 STATIC IMPORTED)
set_property(TARGET base64 PROPERTY IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/Header/third-party/cpp-base64/lib/cpp-base64.lib")

target_link_libraries(LiteLoader base64 sqlitecpp sqlite3
        "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/openssl/libcrypto.lib"
        "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/openssl/libssl.lib"
        "${CMAKE_CURRENT_SOURCE_DIR}/Lib/third-party/leveldb/leveldb.lib"
        "${TARGET_DIR}/Chakra.lib")
