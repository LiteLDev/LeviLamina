#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/goal/WorkDefinition.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class WorkGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::POIType>                              mPOIType;
    ::ll::TypedStorage<8, 152, ::WorkDefinition>                     mDefinition;
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
    // prevent constructor by default
    WorkGoal();

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

    virtual ~WorkGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorkGoal(::Mob& mob);

    MCAPI bool _isInsideOrIsNotRaining();

    MCAPI void playPOISoundEvent() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $useWorkstation();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
