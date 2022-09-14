cmake_minimum_required(VERSION 3.21)
project(ScriptEngine-NodeJs)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

set(LLSE_BACKEND NODEJS)
set(SCRIPTX_BACKEND V8)
set(LLSE_BACKEND_LIBRARY NodeJs)

include(../../CMakeLists.txt)

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE ${SCRIPTENGINE_SOURCE_DIR}/third-party/include/NodeJs
        PRIVATE ${SCRIPTENGINE_SOURCE_DIR}/third-party/include/NodeJs/v8
)

# copy target DLL and PDB to output directory
add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${PROJECT_NAME}> ${CMAKE_BINARY_DIR}/output/plugins/LiteLoader/LiteLoader.NodeJs.dll
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:${PROJECT_NAME}> ${CMAKE_BINARY_DIR}/pdb/LiteLoader.NodeJs.pdb
        COMMENT "Copying ${PROJECT_NAME} DLL and PDB to output directory"
        VERBATIM
)
