#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/GameRule.h"

namespace GameRuleUtils {
// NOLINTBEGIN
MCAPI void setGameRule(
    class Level&,
    struct GameRuleId const&,
    std::variant<int, float, bool>,
    class GameRule::ValidationError*,
    bool
);
// NOLINTEND

}; // namespace GameRuleUtils
