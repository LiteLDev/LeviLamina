cmake_minimum_required(VERSION 3.21)
project(ScriptEngine-Python)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

set(LLSE_BACKEND PYTHON)
set(SCRIPTX_BACKEND Python)
set(LLSE_BACKEND_LIBRARY Python)

include(../../CMakeLists.txt)

target_include_directories(${PROJECT_NAME} PRIVATE ${SCRIPTENGINE_SOURCE_DIR}/third-party/backend/include/Python/)

# copy target DLL and PDB to output directory
add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${PROJECT_NAME}> ${CMAKE_BINARY_DIR}/output/plugins/LiteLoader/LiteLoader.Python.dll
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:${PROJECT_NAME}> ${CMAKE_BINARY_DIR}/pdb/LiteLoader.Python.pdb
        COMMENT "Copying ${PROJECT_NAME} DLL and PDB to output directory"
        VERBATIM
)

if(NOT "${BDS_LOCAL_DEV_ENVIRONMENT_DIR}" STREQUAL "")
    # copy target DLL and PDB to local bds dev directory
        add_custom_command(
                TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${PROJECT_NAME}> ${BDS_LOCAL_DEV_ENVIRONMENT_DIR}/plugins/LiteLoader/LiteLoader.Python.dll
                COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:${PROJECT_NAME}> ${BDS_LOCAL_DEV_ENVIRONMENT_DIR}/plugins/LiteLoader/pdb/LiteLoader.Python.pdb
                COMMENT "Copying ${PROJECT_NAME} DLL and PDB to local bds dev directory"
                VERBATIM
        )
endif()