#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
namespace Scripting { template<typename T0> class Result; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptResultUtil {
// NOLINTBEGIN
/**
 * @symbol
 * ?GametestResultToScriptingValueResult\@ScriptResultUtil\@\@YA?AV?$Result\@VVec3\@\@\@Scripting\@\@AEBV?$variant\@UGameTestError\@gametest\@\@VBlockPos\@\@\@std\@\@\@Z
 */
MCAPI class Scripting::Result<class Vec3>
GametestResultToScriptingValueResult(std::variant<struct gametest::GameTestError, class BlockPos> const&);
/**
 * @symbol
 * ?GametestResultToScriptingValueResult\@ScriptResultUtil\@\@YA?AV?$Result\@VVec3\@\@\@Scripting\@\@AEBV?$variant\@UGameTestError\@gametest\@\@VVec3\@\@\@std\@\@\@Z
 */
MCAPI class Scripting::Result<class Vec3>
GametestResultToScriptingValueResult(std::variant<struct gametest::GameTestError, class Vec3> const&);
/**
 * @symbol
 * ?ScriptingResultToGameTestResult\@ScriptResultUtil\@\@YA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVResultAny\@Scripting\@\@\@Z
 */
MCAPI std::optional<struct gametest::GameTestError> ScriptingResultToGameTestResult(class Scripting::ResultAny const&);
// NOLINTEND

}; // namespace ScriptResultUtil
