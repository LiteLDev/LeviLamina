#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/GameRule.h"

// auto generated forward declare list
// clang-format off
class Level;
struct GameRuleId;
// clang-format on

namespace GameRuleUtils {
// functions
// NOLINTBEGIN
MCAPI void setGameRule(
    ::Level&                         level,
    ::GameRuleId const&              ruleId,
    ::std::variant<int, float, bool> value,
    ::GameRule::ValidationError*     validationError,
    bool                             sendTelemetry
);
// NOLINTEND

} // namespace GameRuleUtils
