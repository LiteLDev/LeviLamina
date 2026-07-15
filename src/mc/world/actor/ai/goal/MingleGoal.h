#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class MingleGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                           mCooldownTicksMax;
    ::ll::TypedStorage<4, 4, int>                           mMingleTicks;
    ::ll::TypedStorage<4, 4, int>                           mMingleTicksMax;
    ::ll::TypedStorage<4, 4, int>                           mAvailableTicks;
    ::ll::TypedStorage<4, 4, int>                           mAvailableTicksMax;
    ::ll::TypedStorage<4, 4, int>                           mSpeakInterval;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mDesiredPartnerType;
    ::ll::TypedStorage<4, 4, float>                         mMingleDistanceSquared;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
