cmake_minimum_required(VERSION 3.21)
project(LiteLoader.Js)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

set(LLSE_BACKEND QUICKJS)
set(SCRIPTX_BACKEND QuickJs)
set(LLSE_BACKEND_LIBRARY QuickJs)

include(../../CMakeLists.txt)

# copy target DLL and PDB to output directory
add_custom_command(
        TARGET LiteLoader.Js POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:LiteLoader.Js> ${CMAKE_BINARY_DIR}/output/plugins/LiteLoader/
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:LiteLoader.Js> ${CMAKE_BINARY_DIR}/pdb/
        COMMENT "Copying LiteLoader.Js DLL and PDB to output directory"
        VERBATIM
)
