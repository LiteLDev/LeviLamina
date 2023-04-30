/**
 * @file  ScriptResultUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "gametest.hpp"
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
     * @symbol ?GametestResultToScriptingValueResult\@ScriptResultUtil\@\@YA?AV?$Result\@VVec3\@\@\@Scripting\@\@AEBV?$variant\@UGameTestError\@gametest\@\@VBlockPos\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<class Vec3> GametestResultToScriptingValueResult(class std::variant<struct gametest::GameTestError, class BlockPos> const &);
    /**
     * @symbol ?GametestResultToScriptingValueResult\@ScriptResultUtil\@\@YA?AV?$Result\@VVec3\@\@\@Scripting\@\@AEBV?$variant\@UGameTestError\@gametest\@\@VVec3\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<class Vec3> GametestResultToScriptingValueResult(class std::variant<struct gametest::GameTestError, class Vec3> const &);
    /**
     * @symbol ?ScriptingResultToGameTestResult\@ScriptResultUtil\@\@YA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVResultAny\@Scripting\@\@\@Z
     */
    MCAPI class std::optional<struct gametest::GameTestError> ScriptingResultToGameTestResult(class Scripting::ResultAny const &);

};