cmake_minimum_required(VERSION 3.21)
project(LiteLoader.NodeJs)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

set(LLSE_BACKEND NODEJS)
set(SCRIPTX_BACKEND V8)
set(LLSE_BACKEND_LIBRARY NodeJs)

include(../../CMakeLists.txt)

# copy target DLL and PDB to output directory
add_custom_command(
        TARGET LiteLoader.NodeJs POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:LiteLoader.NodeJs> ${CMAKE_BINARY_DIR}/output/plugins/LiteLoader/
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:LiteLoader.NodeJs> ${CMAKE_BINARY_DIR}/pdb/
        COMMENT "Copying LiteLoader.NodeJs DLL and PDB to output directory"
        VERBATIM
)
