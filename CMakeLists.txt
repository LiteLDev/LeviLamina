cmake_minimum_required(VERSION 3.24)

set(LITELOADER_PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(lib)
add_subdirectory(prebuilt)

project(LiteLoader)

set(fifo_map_SOURCE_DIR ${PROJECT_SOURCE_DIR}/lib/fifo_map)
set(entt_SOURCE_DIR ${PROJECT_SOURCE_DIR}/lib/entt)
set(pcg_SOURCE_DIR ${PROJECT_SOURCE_DIR}/lib/pcg)

set(CMAKE_CXX_STANDARD 20)

file(
        GLOB_RECURSE SRC_FILES
        ${PROJECT_SOURCE_DIR}/prebuilt/*.h
        ${PROJECT_SOURCE_DIR}/prebuilt/*.hpp
        ${PROJECT_SOURCE_DIR}/include/*.h
        ${PROJECT_SOURCE_DIR}/include/*.hpp
        ${PROJECT_SOURCE_DIR}/src/*.cpp
        ${PROJECT_SOURCE_DIR}/src/*.hpp
        ${PROJECT_SOURCE_DIR}/src/*.h
        ${PROJECT_SOURCE_DIR}/src/*.rc
)

add_library(LiteLoader SHARED ${SRC_FILES})

# Replace Compile Flag /EHsc to /EHa
string(REPLACE "/EHsc" "/EHa" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})

target_compile_options(
        LiteLoader PRIVATE
        /permissive- /MP /analyze:external- /GS /GL /W3 /Gy /Zc:wchar_t /Zi /Gm- /sdl /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /FC /nologo /Ot /diagnostics:column /utf-8
        "$<$<CONFIG:Debug>:/Od;/MDd>"
        "$<$<CONFIG:Release>:/O2;/MD>"
)

target_compile_definitions(
        LiteLoader PRIVATE
        UNICODE NDEBUG LITELOADER_EXPORTS WIN32_LEAN_AND_MEAN CPPHTTPLIB_OPENSSL_SUPPORT _CRT_SECURE_NO_WARNINGS
        _WINDOWS _USRDLL _AMD64_ NOMINMAX
)

# use delayload to import BDS APIs manually(bedrock_server.dll does not need to exist)
target_link_options(
        LiteLoader
        PRIVATE /MANIFEST /LTCG:incremental /NXCOMPAT /DEBUG:FULL /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO /SUBSYSTEM:CONSOLE /MANIFESTUAC:NO /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /TLBID:1 /DELAYLOAD:bedrock_server.dll
)

target_link_libraries(
        LiteLoader
        leveldb crypto ssl SQLiteCpp sqlite3 mysql CED dyncall_s dyncallback_s dynload_s dbghelp nlohmann_json nbt_cpp
        # Please make sure that the BDS APIs ImportLibrary is at the bottom of the list to ensure proper linking.
        bds_api bds_var PreLoader SymDBHelper
)

target_include_directories(
        LiteLoader SYSTEM PUBLIC
        ${PROJECT_SOURCE_DIR}/prebuilt/include
        ${FMT_SOURCE_DIR}/include
        ${nlohmann_json_SOURCE_DIR}/include
        ${magic_enum_SOURCE_DIR}/include
        ${GSL_SOURCE_DIR}/include
        ${nbt_cpp_SOURCE_DIR}/include
        ${fifo_map_SOURCE_DIR}/src
        ${entt_SOURCE_DIR}/src
        ${httplib_SOURCE_DIR}
        ${pcg_SOURCE_DIR}/include

        # prebuilt
        ${CED_SOURCE_DIR}/include
        ${dbghelp_SOURCE_DIR}/include
        ${dyncall_SOURCE_DIR}/include
        ${leveldb_SOURCE_DIR}/include
        ${mysql_SOURCE_DIR}/include
        ${openssl_SOURCE_DIR}/include
        ${sqlite3_SOURCE_DIR}/include
        ${SQLiteCpp_SOURCE_DIR}/include
)

target_include_directories(
        LiteLoader PUBLIC
        ${PROJECT_SOURCE_DIR}/include/
)
