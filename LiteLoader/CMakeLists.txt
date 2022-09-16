cmake_minimum_required(VERSION 3.21)
project(LiteLoader)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release) # Always uses Release mode to build BDS plugin for ABI Compatibility

file(
        GLOB_RECURSE SRC_FILES
        ${PROJECT_SOURCE_DIR}/third-party/include/*.h
        ${PROJECT_SOURCE_DIR}/third-party/include/*.hpp
        ${PROJECT_SOURCE_DIR}/include/*.h
        ${PROJECT_SOURCE_DIR}/include/*.hpp
        ${PROJECT_SOURCE_DIR}/src/*.cpp
        ${PROJECT_SOURCE_DIR}/src/*.hpp
        ${PROJECT_SOURCE_DIR}/src/*.h
        ${PROJECT_SOURCE_DIR}/src/*.rc
)

# third-party source files
file(GLOB_RECURSE THIRD_PARTY_SRC_FILES ${PROJECT_SOURCE_DIR}/third-party/src/*)

# third-party library files
file(GLOB_RECURSE THIRD_PARTY_LIB_FILES ${PROJECT_SOURCE_DIR}/third-party/lib/*.lib)

add_definitions(
        -DUNICODE -DNDEBUG -DLITELOADER_EXPORTS -DWIN32_LEAN_AND_MEAN
        -DCPPHTTPLIB_OPENSSL_SUPPORT -D_CRT_SECURE_NO_WARNINGS -D_WINDOWS
        -D_USRDLL -D_AMD64_ -DNOMINMAX
)

add_compile_options(
        /permissive /MP /analyze:external- /GS /GL /W3 /Gy /Zc:wchar_t /Zi /Gm- /O2 /sdl /Zc:inline /fp:precise
        /external:W1 /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /FC /EHa /nologo /Ot /diagnostics:column
        /utf-8
)

add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT /DEBUG:FULL /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO /SUBSYSTEM:CONSOLE
        /MANIFESTUAC:NO /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /TLBID:1
        /DELAYLOAD:bedrock_server.dll # use delayload to import BDS APIs manually(bedrock_server.dll does not need to exist)
)

add_library(LiteLoader SHARED ${SRC_FILES} ${THIRD_PARTY_SRC_FILES})

target_link_libraries(
        LiteLoader
        ${THIRD_PARTY_LIB_FILES}
        # Please make sure that the BDS APIs ImportLibrary is at the bottom of the list to ensure proper linking.
        "${PROJECT_SOURCE_DIR}/Lib/bedrock_server_api.lib"
        "${PROJECT_SOURCE_DIR}/Lib/bedrock_server_var.lib"
        LLPreLoader
)

target_include_directories(
        LiteLoader SYSTEM
        PRIVATE ${PROJECT_SOURCE_DIR}/third-party/include
)

target_include_directories(
        LiteLoader
        PRIVATE ${PROJECT_SOURCE_DIR}/include/
        PRIVATE ${CMAKE_SOURCE_DIR}
)

add_custom_command(
        TARGET LiteLoader PRE_BUILD
        COMMAND cmd /c ${CMAKE_SOURCE_DIR}/Scripts/PrepareLibraries.cmd ${CMAKE_SOURCE_DIR}
)

# Copy the built DLL and PDB to the output directory
add_custom_command(
        TARGET LiteLoader POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:LiteLoader> ${CMAKE_BINARY_DIR}/output/
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:LiteLoader> ${CMAKE_BINARY_DIR}/pdb/
        COMMENT "Copying LiteLoader DLL and PDB to output directory"
        VERBATIM
)

# Copy the built lib to the SDK directory
add_custom_command(
        TARGET LiteLoader POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_LINKER_FILE:LiteLoader> ${CMAKE_BINARY_DIR}/sdk/lib/
        COMMENT "Copying LiteLoader Lib to SDK directory"
        VERBATIM
)
