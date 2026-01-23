#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/world/level/storage/GameRule.h"
#include "mc/world/level/storage/GameRules.h"

namespace ScriptModuleMinecraft {

struct ScriptGameRuleChangeAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameRules::GameRulesIndex>                          mRule;
    ::ll::TypedStorage<1, 1, ::GameRule::Type>                                     mType;
    ::ll::TypedStorage<4, 8, ::std::variant<::cereal::NullType, bool, int, float>> mValue;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
