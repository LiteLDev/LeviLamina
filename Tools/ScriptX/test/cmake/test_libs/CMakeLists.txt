set(DEPENDENCY_SCRIPTX_LIBS_BRANCH main)

if (NOT EXISTS "${SCRIPTX_TEST_LIBS}")

    message(STATUS "SCRIPTX_TEST_LIBS ${SCRIPTX_TEST_LIBS} is empty. "
            "Downloading test libs including V8, JavaScriptCore, Lua, etc.")

    configure_file(${CMAKE_CURRENT_LIST_DIR}/CMakeLists.txt.in ScriptXLibsDownload/CMakeLists.txt)

    execute_process(COMMAND
            ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
            RESULT_VARIABLE result
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/ScriptXLibsDownload
            )
    if (result)
        message(FATAL_ERROR "CMake step for download ScriptXLibs failed: ${result}")
    endif ()

    execute_process(COMMAND
            ${CMAKE_COMMAND} --build .
            RESULT_VARIABLE result
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/ScriptXLibsDownload
            )
    if (result)
        message(FATAL_ERROR "Build step for download ScriptXLibs failed: ${result}")
    endif ()
elseif (("${SCRIPTX_TEST_FORCE_UPDATE_DEPS}" STREQUAL ON) OR ("$ENV{SCRIPTX_TEST_FORCE_UPDATE_DEPS}" STREQUAL ON))
    message(STATUS "update SCRIPTX_TEST_LIBS ${SCRIPTX_TEST_LIBS}")
    execute_process(COMMAND
            git fetch
            WORKING_DIRECTORY ${SCRIPTX_TEST_LIBS}
            )
    execute_process(COMMAND
            git checkout --force origin/${DEPENDENCY_SCRIPTX_LIBS_BRANCH}
            WORKING_DIRECTORY ${SCRIPTX_TEST_LIBS}
            )
endif ()

