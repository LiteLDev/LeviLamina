# This CMakeLists just for loading symbols in clion
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

add_definitions(-D "CPPHTTPLIB_OPENSSL_SUPPORT" -D "NDEBUG" -D "_CONSOLE" -D "_AMD64_"
        -D "NOMINMAX" -D "SCRIPTX_BACKEND_TRAIT_PREFIX=../backend/Lua/trait/Trait"
        -D "_WINDLL" -D "_UNICODE" -D "UNICODE")

add_compile_options(
        /permissive- /MP /ifcOutput "x64/Lua/" /GS /GL /W3 /Gy /Zc:wchar_t
        /Zi /Gm- /O2 /sdl /Fd"x64/Lua/vc143.pdb" /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /std:c++17 /FC /Fa"x64/Lua/"
        /EHa /nologo /Fo"x64/Lua/" /Fp"x64/Lua/LiteLoader.Lua.pch" /diagnostics:column /utf-8
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT /PDB:"C:/Users/thirt/source/repos/LiteLoader/x64/Release/LiteLoader.Lua.pdb"
        /DYNAMICBASE "C:/Users/thirt/source/repos/LiteLoader/ScriptEngine/third-party/ScriptX/lib/ScriptX-Lua.lib"
        "C:/Users/thirt/source/repos/LiteLoader/ScriptEngine/third-party/Lua/lib/lua.lib" "kernel32.lib" "user32.lib"
        "gdi32.lib" "winspool.lib" "comdlg32.lib" "advapi32.lib" "shell32.lib" "ole32.lib" "oleaut32.lib" "uuid.lib"
        "odbc32.lib" "odbccp32.lib" /IMPLIB:"C:/Users/thirt/source/repos/LiteLoader/x64/Release/LiteLoader.Lua.lib"
        /DEBUG:FULL /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO /PGD:"C:/Users/thirt/source/repos/LiteLoader/x64/Release/LiteLoader.Lua.pgd"
        /SUBSYSTEM:WINDOWS /MANIFESTUAC:"level='asInvoker' uiAccess='false'" /ManifestFile:"x64/Lua/LiteLoader.Lua.dll.intermediate.manifest"
        /LTCGOUT:"x64/Lua/LiteLoader.Lua.iobj" /OPT:ICF /ERRORREPORT:PROMPT /ILK:"x64/Lua/LiteLoader.Lua.ilk" /NOLOGO /DELAYLOAD:"bedrock_server.dll" /TLBID:1
)

add_library(ScriptEngine SHARED ${SRC_FILES})

include_directories(${PROJECT_SOURCE_DIR}/)
include_directories(${PROJECT_SOURCE_DIR}/../LiteLoader/Header)
include_directories(${PROJECT_SOURCE_DIR}/../LiteLoader/Header/third-party)
include_directories(${PROJECT_SOURCE_DIR}/third-party)
include_directories(${PROJECT_SOURCE_DIR}/third-party/ScriptX/src/include/ScriptX)
include_directories(${PROJECT_SOURCE_DIR}/third-party/ScriptX/src/include)
include_directories(${PROJECT_SOURCE_DIR}/third-party/Lua/include)
include_directories(${PROJECT_SOURCE_DIR}/third-party/gsl)

link_directories(.)
link_directories(${PROJECT_SOURCE_DIR}/../x64/Release/)