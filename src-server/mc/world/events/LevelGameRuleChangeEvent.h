#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/GameRule.h"
#include "mc/world/level/storage/GameRules.h"

struct LevelGameRuleChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameRules::GameRulesIndex>                        mRule;
    ::ll::TypedStorage<1, 1, ::GameRule::Type>                                   mType;
    ::ll::TypedStorage<4, 8, ::std::variant<::std::monostate, bool, int, float>> mValue;
    // NOLINTEND
};
