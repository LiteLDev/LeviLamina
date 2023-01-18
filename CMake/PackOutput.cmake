execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/pdb)
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/output)
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/output/plugins/LiteLoader/)

add_custom_target(PackOutput)

# Copy assets to output after build all.
add_custom_command(
        TARGET PackOutput POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/assets/plugins ${CMAKE_BINARY_DIR}/output/plugins/
        COMMENT "Copying assets to output"
        VERBATIM
)

# Copy ScriptEngine BaseLib to output after build all.
add_custom_command(
        TARGET PackOutput POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/ScriptEngine/assets ${CMAKE_BINARY_DIR}/output/plugins/lib/
        COMMENT "Copying ScriptEngine BaseLib to output"
        VERBATIM
)

# Copy LLPeEditor to output after build all.
add_custom_command(
        TARGET PackOutput POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/Tools/LLPeEditor.exe ${CMAKE_BINARY_DIR}/output/
        COMMENT "Copying LLPeEditor to output"
        VERBATIM
)
