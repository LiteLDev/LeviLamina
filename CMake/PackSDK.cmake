execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/sdk)
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/sdk/Tools)
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/sdk/Lib)

add_custom_target(PackSDK)

add_custom_command(
        TARGET PackSDK POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${LiteLoader_SOURCE_DIR}/include/llapi ${CMAKE_BINARY_DIR}/sdk/Header
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${LiteLoader_SOURCE_DIR}/third-party/include ${CMAKE_BINARY_DIR}/sdk/third-party
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/LibraryBuilder.exe ${CMAKE_BINARY_DIR}/sdk/Tools/
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/LLPeEditor.exe ${CMAKE_BINARY_DIR}/sdk/Tools/
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/SDK-submodule-add.cmd ${CMAKE_BINARY_DIR}/sdk/Tools/
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/SDK-submodule-update.cmd ${CMAKE_BINARY_DIR}/sdk/Tools/
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/SDK-subtree.cmd ${CMAKE_BINARY_DIR}/sdk/Tools/
        COMMENT "Copying SDK files"
        VERBATIM
)
