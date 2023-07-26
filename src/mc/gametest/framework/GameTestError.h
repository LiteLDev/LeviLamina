#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace gametest { enum class GameTestErrorType; }
// clang-format on

namespace gametest {

struct GameTestError {

public:
    // prevent constructor by default
    GameTestError& operator=(GameTestError const&) = delete;
    GameTestError()                                = delete;

public:
    /**
     * @symbol ??0GameTestError\@gametest\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI GameTestError(struct gametest::GameTestError const&); // NOLINT
    /**
     * @symbol ??0GameTestError\@gametest\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI GameTestError(struct gametest::GameTestError&&); // NOLINT
    /**
     * @symbol
     * ??0GameTestError\@gametest\@\@QEAA\@W4GameTestErrorType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI GameTestError(enum class gametest::GameTestErrorType, std::string const&, std::vector<std::string>); // NOLINT
    /**
     * @symbol
     * ??0GameTestError\@gametest\@\@QEAA\@W4GameTestErrorType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI GameTestError(enum class gametest::GameTestErrorType, std::string const&); // NOLINT
    /**
     * @symbol ??1GameTestError\@gametest\@\@QEAA\@XZ
     */
    MCAPI ~GameTestError(); // NOLINT
    /**
     * @symbol
     * ?bind\@GameTestError\@gametest\@\@SA?AV?$ErrorBindingBuilder\@UGameTestError\@gametest\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ErrorBindingBuilder<struct gametest::GameTestError> bind(); // NOLINT
};

}; // namespace gametest
