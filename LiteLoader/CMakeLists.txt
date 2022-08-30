cmake_minimum_required(VERSION 3.21)
project(LiteLoader)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/x64/)

set(TARGET_DIR ${CMAKE_SOURCE_DIR}/x64/Release/)

file(GLOB_RECURSE SRC_FILES
        ${PROJECT_SOURCE_DIR}/Lib/third-party/nbt-cpp/*.cpp
        ${PROJECT_SOURCE_DIR}/Header/*.cpp
        ${PROJECT_SOURCE_DIR}/Header/*.hpp
        ${PROJECT_SOURCE_DIR}/Header/*.h
        ${PROJECT_SOURCE_DIR}/Kernel/*.cpp
        ${PROJECT_SOURCE_DIR}/Kernel/*.hpp
        ${PROJECT_SOURCE_DIR}/Kernel/*.h
        ${PROJECT_SOURCE_DIR}/Main/*.cpp
        ${PROJECT_SOURCE_DIR}/Main/*.hpp
        ${PROJECT_SOURCE_DIR}/Main/*.h
        ${PROJECT_SOURCE_DIR}/Resource/*.rc
        ${PROJECT_SOURCE_DIR}/Resource/*.h
        )

add_definitions(-DUNICODE -DNDEBUG -DLITELOADER_EXPORTS -DWIN32_LEAN_AND_MEAN
        -DCPPHTTPLIB_OPENSSL_SUPPORT -D_CRT_SECURE_NO_WARNINGS -D_WINDOWS
        -D_USRDLL -D_AMD64_ -DNOMINMAX)

add_compile_options(
        /permissive- /MP /analyze:external- /GS /GL /W3 /Gy /Zc:wchar_t /Zi /Gm- /O2 /sdl /Zc:inline /fp:precise
        /external:W1 /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /FC /EHa /nologo /Ot /diagnostics:column
        /utf-8
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT /DEBUG:FULL /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO /SUBSYSTEM:CONSOLE
        /MANIFESTUAC:NO /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /DELAYLOAD:bedrock_server.dll /TLBID:1
)

include_directories(${PROJECT_SOURCE_DIR}/)
include_directories(${PROJECT_SOURCE_DIR}/Header)
include_directories(${PROJECT_SOURCE_DIR}/Header/third-party)

link_directories(${PROJECT_SOURCE_DIR}/)
link_directories(${CMAKE_SOURCE_DIR}/x64/Release/)

add_library(LiteLoader SHARED ${SRC_FILES})

add_library(sqlitecpp STATIC IMPORTED)
set_property(TARGET sqlitecpp PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/Lib/third-party/SQLiteCpp/SQLiteCpp.lib")
add_library(sqlite3 STATIC IMPORTED)
set_property(TARGET sqlite3 PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/Lib/third-party/SQLiteCpp/sqlite3.lib")
add_library(mysql STATIC IMPORTED)
set_property(TARGET mysql PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/Lib/third-party/mysql/mysqlclient.lib")

target_link_libraries(LiteLoader sqlitecpp sqlite3 mysql
        "${PROJECT_SOURCE_DIR}/Lib/third-party/openssl/libcrypto.lib"
        "${PROJECT_SOURCE_DIR}/Lib/third-party/openssl/libssl.lib"
        "${PROJECT_SOURCE_DIR}/Lib/third-party/leveldb/leveldb.lib"
        "${PROJECT_SOURCE_DIR}/Lib/third-party/compact_enc_det/ced.lib"
        "${PROJECT_SOURCE_DIR}/Lib/third-party/dyncall/dyncall_s.lib"
        "${PROJECT_SOURCE_DIR}/Lib/third-party/dyncall/dyncallback_s.lib"
        "${PROJECT_SOURCE_DIR}/Lib/third-party/dyncall/dynload_s.lib"
        "${PROJECT_SOURCE_DIR}/Lib/third-party/compact_enc_det/ced.lib"
        "${PROJECT_SOURCE_DIR}/Lib/third-party/dbghelp/dbghelp.lib"
        "${PROJECT_SOURCE_DIR}/Lib/bedrock_server_api.lib"
        "${PROJECT_SOURCE_DIR}/Lib/bedrock_server_var.lib"
        LLPreLoader)
