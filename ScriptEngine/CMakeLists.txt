cmake_minimum_required(VERSION 3.21)

if ("${LLSE_BACKEND}" STREQUAL "")
    message(WARNING "LLSE_BACKEND not set, please set")
endif ()

if ("${SCRIPTX_BACKEND}" STREQUAL "")
    message(WARNING "SCRIPTX_BACKEND not set, please set")
endif ()

if ("${LLSE_BACKEND_LIBRARY}" STREQUAL "")
    message(WARNING "LLSE_BACKEND_LIBRARY not set, please set")
endif ()

set(SCRIPTENGINE_DIR ${CMAKE_CURRENT_LIST_DIR})

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/x64/)

set(TARGET_DIR ${CMAKE_SOURCE_DIR}/x64/Release/)

file(GLOB_RECURSE SRC_FILES
        ${SCRIPTENGINE_DIR}/Main/*.cpp
        ${SCRIPTENGINE_DIR}/Main/*.hpp
        ${SCRIPTENGINE_DIR}/Main/*.h
        ${SCRIPTENGINE_DIR}/API/*.cpp
        ${SCRIPTENGINE_DIR}/API/*.hpp
        ${SCRIPTENGINE_DIR}/API/*.h
        ${SCRIPTENGINE_DIR}/Engine/*.cpp
        ${SCRIPTENGINE_DIR}/Engine/*.hpp
        ${SCRIPTENGINE_DIR}/Engine/*.h
        ${SCRIPTENGINE_DIR}/Tools/*.cpp
        ${SCRIPTENGINE_DIR}/Tools/*.hpp
        ${SCRIPTENGINE_DIR}/Tools/*.h
        ${SCRIPTENGINE_DIR}/Resource/*.rc
        ${SCRIPTENGINE_DIR}/Resource/*.h
        )

add_definitions(-D "CPPHTTPLIB_OPENSSL_SUPPORT" -D "NDEBUG" -D "_CONSOLE" -D "_AMD64_"
        -D "NOMINMAX" -D "SCRIPTX_BACKEND_TRAIT_PREFIX=../backend/${SCRIPTX_BACKEND}/trait/Trait"
        -D "_WINDLL" -D "_UNICODE" -D "UNICODE" -D "LLSE_BACKEND_${LLSE_BACKEND}" -D "CMAKE")

add_compile_options(
        /permissive- /MP /GS /GL /W3 /Gy /Zc:wchar_t
        /Zi /Gm- /O2 /sdl /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /FC
        /EHa /nologo /diagnostics:column /utf-8
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT
        /DEBUG:FULL /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO
        /SUBSYSTEM:WINDOWS /MANIFESTUAC:"level='asInvoker' uiAccess='false'"
        /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /DELAYLOAD:"bedrock_server.dll" /TLBID:1
)

add_library(${PROJECT_NAME} SHARED ${SRC_FILES})

include_directories(${SCRIPTENGINE_DIR}/)
include_directories(${SCRIPTENGINE_DIR}/Main)
include_directories(${SCRIPTENGINE_DIR}/..)
include_directories(${LiteLoader_SOURCE_DIR}/Header)
include_directories(${LiteLoader_SOURCE_DIR}/Header/third-party)
include_directories(${SCRIPTENGINE_DIR}/third-party)
include_directories(${SCRIPTENGINE_DIR}/third-party/Lua/include)
include_directories(${SCRIPTENGINE_DIR}/third-party/NodeJs/include)
include_directories(${SCRIPTENGINE_DIR}/third-party/QuickJs/include)
include_directories(${SCRIPTENGINE_DIR}/third-party/ScriptX/src/include/ScriptX)
include_directories(${SCRIPTENGINE_DIR}/third-party/ScriptX/src/include)
include_directories(${SCRIPTENGINE_DIR}/third-party/NodeJs/include)
include_directories(${SCRIPTENGINE_DIR}/third-party/NodeJs/include/v8)
include_directories(${SCRIPTENGINE_DIR}/third-party/gsl)

link_directories(${SCRIPTENGINE_DIR}/)
link_directories(${CMAKE_SOURCE_DIR}/x64/Release/)

add_library(base64 STATIC IMPORTED)
set_property(TARGET base64 PROPERTY IMPORTED_LOCATION "${SCRIPTENGINE_DIR}/third-party/cpp-base64/lib/cpp-base64.lib")

target_link_libraries(${PROJECT_NAME} LiteLoader base64 ScriptX-${LLSE_BACKEND_LIBRARY}
        "${CMAKE_SOURCE_DIR}/LiteLoader/Lib/third-party/openssl/libcrypto.lib"
        "${CMAKE_SOURCE_DIR}/LiteLoader/Lib/third-party/openssl/libssl.lib"
        "${SCRIPTENGINE_DIR}/third-party/dyncall/lib/libdyncall_s.lib"
        "${SCRIPTENGINE_DIR}/third-party/dyncall/lib/libdyncallback_s.lib"
        "${SCRIPTENGINE_DIR}/third-party/dyncall/lib/libdynload_s.lib"
        "${SCRIPTENGINE_DIR}/third-party/LightWebSocketClient/lib/LightWSClient.lib"
        "${SCRIPTENGINE_DIR}/third-party/NodeJs/lib/libnode.lib"
        "${SCRIPTENGINE_DIR}/third-party/QuickJs/lib/quickjs.lib"
        "${SCRIPTENGINE_DIR}/third-party/Lua/lib/lua.lib"
        "${SCRIPTENGINE_DIR}/third-party/nbt-cpp/lib/nbt-cpp.lib"
        "${LiteLoader_SOURCE_DIR}/Lib/bedrock_server_api.lib"
        "${LiteLoader_SOURCE_DIR}/Lib/bedrock_server_var.lib"
        SymDBHelper)