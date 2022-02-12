cmake_minimum_required(VERSION 3.21)
project(ScriptEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/x64/)

set(TARGET_DIR ${CMAKE_SOURCE_DIR}/x64/Release/)

file(GLOB_RECURSE SRC_FILES
        ${PROJECT_SOURCE_DIR}/*.cpp
        ${PROJECT_SOURCE_DIR}/*.hpp
        ${PROJECT_SOURCE_DIR}/*.h
        ${PROJECT_SOURCE_DIR}/API/*.cpp
        ${PROJECT_SOURCE_DIR}/API/*.hpp
        ${PROJECT_SOURCE_DIR}/API/*.h
        ${PROJECT_SOURCE_DIR}/Engine/*.cpp
        ${PROJECT_SOURCE_DIR}/Engine/*.hpp
        ${PROJECT_SOURCE_DIR}/Engine/*.h
        ${PROJECT_SOURCE_DIR}/Kernel/*.cpp
        ${PROJECT_SOURCE_DIR}/Kernel/*.hpp
        ${PROJECT_SOURCE_DIR}/Kernel/*.h
        )

add_definitions(-DUNICODE -DNDEBUG -DWIN32_LEAN_AND_MEAN
        -DCPPHTTPLIB_OPENSSL_SUPPORT -D_CRT_SECURE_NO_WARNINGS -D_WINDOWS
        -D_USRDLL -D_AMD64_ -DNOMINMAX)

add_compile_options(
        /permissive /MP /GS /GL /W0 /Gy /Zc:wchar_t /Zi /Gm- /sdl /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /std:c++17 /FC /EHa /nologo
        /diagnostics:column /utf-8
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT /DEBUG /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO /SUBSYSTEM:WINDOWS
        /MANIFESTUAC:NO /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /DELAYLOAD:"bedrock_server.dll" /TLBID:1
)

add_library(ScriptEngine SHARED ${SRC_FILES})

include_directories(${PROJECT_SOURCE_DIR}/)
include_directories(${PROJECT_SOURCE_DIR}/../LiteLoader/Header)
include_directories(${PROJECT_SOURCE_DIR}/third-party)

link_directories(.)
link_directories(${PROJECT_SOURCE_DIR}/../x64/Release/)