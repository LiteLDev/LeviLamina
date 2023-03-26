cmake_minimum_required(VERSION 3.21)
project(LLPreLoader)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

add_definitions(-D"NDEBUG" -D"_WINDOWS" -D"_USRDLL" -D"_WINDLL" -D"_UNICODE" -D"UNICODE")

add_compile_options(
    /permissive- /GS /GL /W0 /Gy /Zc:wchar_t /Zi /Gm- /O2 /sdl /Zc:inline /fp:precise
    /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /FC /EHsc /nologo /diagnostics:column
)

add_link_options(
    /MANIFEST /LTCG /NXCOMPAT /DEBUG /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO
    /SUBSYSTEM:WINDOWS /MANIFESTUAC:NO /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /TLBID:1
)

aux_source_directory(${PROJECT_SOURCE_DIR}/third-party/rawpdb DIR_LIB_SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src PROJECT_SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/include PROJECT_INCLUDES)

add_library(LLPreLoader SHARED ${PROJECT_INCLUDES} ${PROJECT_SRCS} ${DIR_LIB_SRCS})
target_link_libraries(
    LLPreLoader SymDBHelper Demangler
    "${LiteLoader_SOURCE_DIR}/third-party/lib/detours/detours.lib"
)

target_include_directories(
    LLPreLoader
    PRIVATE ${LiteLoader_SOURCE_DIR}/include
    PRIVATE ${LiteLoader_SOURCE_DIR}/third-party/include
    PRIVATE ${PROJECT_SOURCE_DIR}/include
    PRIVATE ${PROJECT_SOURCE_DIR}/third-party
    PRIVATE ${Demangler_SOURCE_DIR}/include
)

# Copy the dll and pdb to the output directory
add_custom_command(
    TARGET LLPreLoader POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:LLPreLoader> ${CMAKE_BINARY_DIR}/output/
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:LLPreLoader> ${CMAKE_BINARY_DIR}/pdb/
    COMMENT "Copying dll and pdb to output directory"
    VERBATIM
)
