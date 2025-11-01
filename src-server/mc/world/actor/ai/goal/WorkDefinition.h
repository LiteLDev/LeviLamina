#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class WorkDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinSoundDelay;
    ::ll::TypedStorage<4, 4, int> mMaxSoundDelay;
    ::ll::TypedStorage<4, 4, int> mGoalCooldown;
    ::ll::TypedStorage<4, 4, int> mActiveTime;
    ::ll::TypedStorage<1, 1, bool> mCanWorkInRain;
    ::ll::TypedStorage<4, 4, int> mWorkInRainTolerance;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnArrival;
    ::ll::TypedStorage<4, 4, float> mSpeedMod;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkDefinition(WorkDefinition const&);
    WorkDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::WorkDefinition& operator=(::WorkDefinition const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
