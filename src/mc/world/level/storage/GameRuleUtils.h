#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/GameRule.h"

namespace GameRuleUtils {
// NOLINTBEGIN
MCAPI void setGameRule(
    class Level&                     level,
    struct GameRuleId const&         ruleId,
    std::variant<int, float, bool>   value,
    class GameRule::ValidationError* validationError,
    bool                             sendTelemetry
);
// NOLINTEND

}; // namespace GameRuleUtils
