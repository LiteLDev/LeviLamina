add_custom_target(
        CleanOutput
        COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}/output
        COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}/pdb
        COMMENT "Cleaning output directory"
        VERBATIM
)
