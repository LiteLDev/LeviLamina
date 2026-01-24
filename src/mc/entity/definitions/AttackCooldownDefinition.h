#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

class AttackCooldownDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnAttackCooldownComplete;
    ::ll::TypedStorage<4, 8, ::FloatRange>               mCooldownTime;
    // NOLINTEND
};
