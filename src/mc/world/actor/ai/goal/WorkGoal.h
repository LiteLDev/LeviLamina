#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

class WorkGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::POIType>                              mPOIType;
    ::ll::TypedStorage<4, 4, int>                                    mMinSoundDelay;
    ::ll::TypedStorage<4, 4, int>                                    mMaxSoundDelay;
    ::ll::TypedStorage<4, 4, int>                                    mGoalCooldown;
    ::ll::TypedStorage<4, 4, int>                                    mActiveTime;
    ::ll::TypedStorage<1, 1, bool>                                   mCanWorkInRain;
    ::ll::TypedStorage<4, 4, int>                                    mWorkInRainTolerance;
    ::ll::TypedStorage<4, 4, int>                                    mCooldownTick;
    ::ll::TypedStorage<4, 4, int>                                    mActiveTick;
    ::ll::TypedStorage<4, 4, int>                                    mSoundTick;
    ::ll::TypedStorage<4, 4, int>                                    mSoundTickMax;
    ::ll::TypedStorage<1, 1, bool>                                   mCanRainAtLocation;
    ::ll::TypedStorage<4, 4, int>                                    mRainCheckCooldownTick;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnArrival;
    ::ll::TypedStorage<1, 1, bool>                                   mHasEverReachedJobsite;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void useWorkstation();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
