execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/sdk)
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/sdk/include)
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/sdk/include/llapi)
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/sdk/tools)
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/sdk/lib)

add_custom_target(PackSDK)

add_custom_command(
        TARGET PackSDK POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${LiteLoader_SOURCE_DIR}/include/llapi ${CMAKE_BINARY_DIR}/sdk/include/llapi
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${LiteLoader_SOURCE_DIR}/third-party/include ${CMAKE_BINARY_DIR}/sdk/include
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/LibraryBuilder.exe ${CMAKE_BINARY_DIR}/sdk/tools/
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/LLPeEditor.exe ${CMAKE_BINARY_DIR}/sdk/tools/
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/SDK-submodule-add.cmd ${CMAKE_BINARY_DIR}/sdk/tools/
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/SDK-submodule-update.cmd ${CMAKE_BINARY_DIR}/sdk/tools/
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/SDK-subtree.cmd ${CMAKE_BINARY_DIR}/sdk/tools/
        COMMENT "Copying SDK files"
        VERBATIM
)
