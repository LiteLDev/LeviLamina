#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class WorkGoal;
// clang-format on

class WorkDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        mMinSoundDelay;
    ::ll::TypedStorage<4, 4, int>                        mMaxSoundDelay;
    ::ll::TypedStorage<4, 4, int>                        mGoalCooldown;
    ::ll::TypedStorage<4, 4, int>                        mActiveTime;
    ::ll::TypedStorage<1, 1, bool>                       mCanWorkInRain;
    ::ll::TypedStorage<4, 4, int>                        mWorkInRainTolerance;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnArrival;
    ::ll::TypedStorage<4, 4, float>                      mSpeedMod;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::WorkGoal& goal) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
