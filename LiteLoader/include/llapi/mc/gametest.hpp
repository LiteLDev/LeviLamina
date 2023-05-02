/**
 * @file  gametest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace gametest {

#define AFTER_EXTRA


enum class GameTestErrorType : int {
    UNKNOWN_TYPE = 0x0,
    WAITING_ERROR = 0x1,
    EXHAUSTED_ATTEMPTS_ERROR = 0x2,
    ASSERT_AT_POSITION_ERROR = 0x3,
    METHOD_NOT_IMPLEMENTED_ERROR = 0x4,
    EXECUTION_TIMEOUT_ERROR = 0x5,
    LEVEL_STATE_MODIFICATION_ERROR = 0x6,
    FAIL_CONDITIONS_MET_ERROR = 0x7,
    ASSERTION_ERROR = 0x8,
    SIMULATED_PLAYER_OUT_OF_BOUNDS_ERROR = 0x9,
};

#undef AFTER_EXTRA
    /**
     * @symbol ?bindGameTestErrorType\@gametest\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GameTestErrorType\@gametest\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<std::string, enum class gametest::GameTestErrorType> bindGameTestErrorType();

};