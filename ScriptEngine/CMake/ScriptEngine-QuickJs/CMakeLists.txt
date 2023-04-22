cmake_minimum_required(VERSION 3.21)
project(ScriptEngine-QuickJs)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

set(LLSE_BACKEND QUICKJS)
set(SCRIPTX_BACKEND QuickJs)
set(LLSE_BACKEND_LIBRARY QuickJs)

include(../../CMakeLists.txt)

target_include_directories(${PROJECT_NAME} PRIVATE ${SCRIPTENGINE_SOURCE_DIR}/third-party/backend/include/QuickJs/)

# copy target DLL and PDB to output directory
add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${PROJECT_NAME}> ${CMAKE_BINARY_DIR}/output/plugins/LiteLoader/LiteLoader.Js.dll
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:${PROJECT_NAME}> ${CMAKE_BINARY_DIR}/pdb/LiteLoader.Js.pdb
        COMMENT "Copying ${PROJECT_NAME} DLL and PDB to output directory"
        VERBATIM
)

if(NOT "${BDS_LOCAL_DEV_ENVIRONMENT_DIR}" STREQUAL "")
    # copy target DLL and PDB to local bds dev directory
        add_custom_command(
                TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${PROJECT_NAME}> ${BDS_LOCAL_DEV_ENVIRONMENT_DIR}/plugins/LiteLoader/LiteLoader.Js.dll
                COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:${PROJECT_NAME}> ${BDS_LOCAL_DEV_ENVIRONMENT_DIR}/plugins/LiteLoader/pdb/LiteLoader.Js.pdb
                COMMENT "Copying ${PROJECT_NAME} DLL and PDB to local bds dev directory"
                VERBATIM
        )
endif()