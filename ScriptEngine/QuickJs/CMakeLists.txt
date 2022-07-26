cmake_minimum_required(VERSION 3.21)
project(LiteLoader.QuickJs)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/x64/)

set(TARGET_DIR ${CMAKE_SOURCE_DIR}/x64/Release/)

file(GLOB_RECURSE SRC_FILES
        ${PROJECT_SOURCE_DIR}/../*.cpp
        ${PROJECT_SOURCE_DIR}/../*.hpp
        ${PROJECT_SOURCE_DIR}/../*.h
        ${PROJECT_SOURCE_DIR}/../API/*.cpp
        ${PROJECT_SOURCE_DIR}/../API/*.hpp
        ${PROJECT_SOURCE_DIR}/../API/*.h
        ${PROJECT_SOURCE_DIR}/../Engine/*.cpp
        ${PROJECT_SOURCE_DIR}/../Engine/*.hpp
        ${PROJECT_SOURCE_DIR}/../Engine/*.h
        ${PROJECT_SOURCE_DIR}/../Tools/*.cpp
        ${PROJECT_SOURCE_DIR}/../Tools/*.hpp
        ${PROJECT_SOURCE_DIR}/../Tools/*.h
        )

add_definitions(-D "CPPHTTPLIB_OPENSSL_SUPPORT" -D "NDEBUG" -D "_CONSOLE" -D "_AMD64_"
        -D "NOMINMAX" -D "SCRIPTX_BACKEND_TRAIT_PREFIX=../backend/QuickJs/trait/Trait"
        -D "_WINDLL" -D "_UNICODE" -D "UNICODE" -D "LLSE_BACKEND_QUICKJS" -D "CMAKE")

add_compile_options(
        /permissive- /MP /GS /GL /W3 /Gy /Zc:wchar_t
        /Zi /Gm- /O2 /sdl /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /std:c++20 /FC
        /EHa /nologo /diagnostics:column /utf-8
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT
        /DEBUG:FULL /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO
        /SUBSYSTEM:WINDOWS /MANIFESTUAC:"level='asInvoker' uiAccess='false'"
        /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /DELAYLOAD:"bedrock_server.dll" /TLBID:1
)

add_library(LiteLoader.Js SHARED ${SRC_FILES} ${PROJECT_SOURCE_DIR}/../ScriptEngine.rc)

include_directories(${PROJECT_SOURCE_DIR}/..)
include_directories(${PROJECT_SOURCE_DIR}/../..)
include_directories(${PROJECT_SOURCE_DIR}/../../LiteLoader/Header)
include_directories(${PROJECT_SOURCE_DIR}/../../LiteLoader/Header/third-party)
include_directories(${PROJECT_SOURCE_DIR}/../third-party)
include_directories(${PROJECT_SOURCE_DIR}/../third-party/ScriptX/src/include/ScriptX)
include_directories(${PROJECT_SOURCE_DIR}/../third-party/ScriptX/src/include)
include_directories(${PROJECT_SOURCE_DIR}/../third-party/QuickJs/include)
include_directories(${PROJECT_SOURCE_DIR}/../third-party/gsl)

link_directories(${PROJECT_SOURCE_DIR}/../)
link_directories(${PROJECT_SOURCE_DIR}/../../x64/Release/)

add_library(base64 STATIC IMPORTED)
set_property(TARGET base64 PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/../third-party/cpp-base64/lib/cpp-base64.lib")

target_link_libraries(LiteLoader.Js LiteLoader base64 ScriptX-Js
        "${PROJECT_SOURCE_DIR}/../third-party/openssl/libcrypto.lib"
        "${PROJECT_SOURCE_DIR}/../third-party/openssl/libssl.lib"
        "${PROJECT_SOURCE_DIR}/../third-party/dyncall/lib/libdyncall_s.lib"
        "${PROJECT_SOURCE_DIR}/../third-party/dyncall/lib/libdyncallback_s.lib"
        "${PROJECT_SOURCE_DIR}/../third-party/dyncall/lib/libdynload_s.lib"
        "${PROJECT_SOURCE_DIR}/../third-party/LightWebSocketClient/lib/LightWSClient.lib"
        # "${PROJECT_SOURCE_DIR}/../third-party/V8/lib/v8.lib"
        # "${PROJECT_SOURCE_DIR}/../third-party/V8/lib/v8_libbase.lib"
        # "${PROJECT_SOURCE_DIR}/../third-party/V8/lib/v8_libplatform.lib"
        "${PROJECT_SOURCE_DIR}/../third-party/QuickJs/lib/quickjs.lib"
        "${PROJECT_SOURCE_DIR}/../third-party/nbt-cpp/lib/nbt-cpp.lib"
        # "${PROJECT_SOURCE_DIR}/../third-party/V8/lib/zlib.lib"
        "${PROJECT_SOURCE_DIR}/../../LiteLoader/Lib/bedrock_server_api.lib"
        "${PROJECT_SOURCE_DIR}/../../LiteLoader/Lib/bedrock_server_var.lib"
        SymDBHelper)