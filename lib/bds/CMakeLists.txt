cmake_minimum_required(VERSION 3.24)

project(bds)

add_custom_command(
        OUTPUT ${PROJECT_SOURCE_DIR}/bedrock_server_api.lib ${PROJECT_SOURCE_DIR}/bedrock_server_var.lib
        COMMAND ${LITELOADER_PROJECT_ROOT}/scripts/PrepareLibraries.cmd ${LITELOADER_PROJECT_ROOT}
)

add_custom_target(
        PrepareLibraries
        DEPENDS ${PROJECT_SOURCE_DIR}/bedrock_server_api.lib ${PROJECT_SOURCE_DIR}/bedrock_server_var.lib
)

add_library(bds_api STATIC IMPORTED GLOBAL)
set_target_properties(bds_api PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/bedrock_server_api.lib)

add_library(bds_var STATIC IMPORTED GLOBAL)
set_target_properties(bds_var PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/bedrock_server_var.lib)
