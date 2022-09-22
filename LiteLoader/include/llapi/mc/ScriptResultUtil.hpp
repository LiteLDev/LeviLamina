/**
 * @file  ScriptResultUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptResultUtil.
 *
 */
namespace ScriptResultUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   1845946879
     * @symbol ?ScriptingResultToGameTestResult@ScriptResultUtil@@YA?AV?$optional@UGameTestError@gametest@@@std@@AEBVResultAny@Scripting@@@Z
     */
    MCAPI class std::optional<struct gametest::GameTestError> ScriptingResultToGameTestResult(class Scripting::ResultAny const &);

};