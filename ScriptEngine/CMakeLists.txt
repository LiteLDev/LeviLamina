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

file(
        GLOB_RECURSE SRC_FILES
        ${SCRIPTENGINE_DIR}/src/main/*.cpp
        ${SCRIPTENGINE_DIR}/src/main/*.hpp
        ${SCRIPTENGINE_DIR}/src/main/*.h
        ${SCRIPTENGINE_DIR}/src/api/*.cpp
        ${SCRIPTENGINE_DIR}/src/api/*.hpp
        ${SCRIPTENGINE_DIR}/src/api/*.h
        ${SCRIPTENGINE_DIR}/src/engine/*.cpp
        ${SCRIPTENGINE_DIR}/src/engine/*.hpp
        ${SCRIPTENGINE_DIR}/src/engine/*.h
        ${SCRIPTENGINE_DIR}/src/utils/*.cpp
        ${SCRIPTENGINE_DIR}/src/utils/*.hpp
        ${SCRIPTENGINE_DIR}/src/utils/*.h
        ${SCRIPTENGINE_DIR}/src/res/*.rc
        ${SCRIPTENGINE_DIR}/src/res/*.h
)

add_definitions(
        -DCPPHTTPLIB_OPENSSL_SUPPORT -DNDEBUG -D_CONSOLE -D_AMD64_
        -DNOMINMAX -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/${SCRIPTX_BACKEND}/trait/Trait
        -D_WINDLL -D_UNICODE -DUNICODE -D "LLSE_BACKEND_${LLSE_BACKEND}" -DCMAKE
)

# Replace Compile Flag /EHsc to /EHa
string(REPLACE "/EHsc" "/EHa" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})

add_compile_options(
        /permissive- /MP /GS /GL /W3 /Gy /Zc:wchar_t
        /Zi /Gm- /O2 /sdl /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /FC
        /nologo /diagnostics:column /utf-8
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT
        /DEBUG:FULL /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO
        /SUBSYSTEM:WINDOWS /MANIFESTUAC:NO
        /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /TLBID:1
        /DELAYLOAD:bedrock_server.dll # use delayload to import BDS APIs manually(bedrock_server.dll does not need to exist)
)

add_library(${PROJECT_NAME} SHARED ${SRC_FILES})

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        ${CMAKE_SOURCE_DIR}
        ${LiteLoader_SOURCE_DIR}/include/
        ${LiteLoader_SOURCE_DIR}/third-party/include
        ${SCRIPTENGINE_DIR}/third-party/include
        ${SCRIPTENGINE_DIR}/third-party/ScriptX/src/include
)

file(
        GLOB_RECURSE SCRIPTENGINE_THIRD_PARTY_LIBS
        ${SCRIPTENGINE_DIR}/third-party/lib/*.lib
)

target_link_libraries(
        ${PROJECT_NAME} LiteLoader ScriptX-${LLSE_BACKEND_LIBRARY}
        "${LiteLoader_SOURCE_DIR}/third-party/lib/openssl/libcrypto.lib"
        "${LiteLoader_SOURCE_DIR}/third-party/lib/openssl/libssl.lib"
        ${SCRIPTENGINE_THIRD_PARTY_LIBS}
        # Please make sure that the BDS APIs ImportLibrary is at the bottom of the list to ensure proper linking.
        "${LiteLoader_SOURCE_DIR}/lib/bedrock_server_api.lib"
        "${LiteLoader_SOURCE_DIR}/lib/bedrock_server_var.lib"
        SymDBHelper
)