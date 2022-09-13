cmake_minimum_required(VERSION 3.21)
project(LiteLoader.Lua)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

set(LLSE_BACKEND LUA)
set(SCRIPTX_BACKEND Lua)
set(LLSE_BACKEND_LIBRARY Lua)

include(../../CMakeLists.txt)

# copy target DLL and PDB to output directory
add_custom_command(
        TARGET LiteLoader.Lua POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:LiteLoader.Lua> ${CMAKE_BINARY_DIR}/output/plugins/LiteLoader/
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:LiteLoader.Lua> ${CMAKE_BINARY_DIR}/pdb/
        COMMENT "Copying LiteLoader.Lua DLL and PDB to output directory"
        VERBATIM
)
