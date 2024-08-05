#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptResultUtil {
// NOLINTBEGIN
MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError>
GametestResultToScriptingValueResult(std::variant<struct gametest::GameTestError, class BlockPos> const& result);

MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError>
GametestResultToScriptingValueResult(std::variant<struct gametest::GameTestError, class Vec3> const& result);

MCAPI std::optional<struct gametest::GameTestError>
      ScriptingResultToGameTestResult(class Scripting::ResultAny const& result);
// NOLINTEND

}; // namespace ScriptResultUtil
