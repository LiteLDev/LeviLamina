#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class BreedGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>           mOwner;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPartner;
    ::ll::TypedStorage<4, 4, int>              mLoveTime;
    ::ll::TypedStorage<4, 4, float>            mSpeed;
    ::ll::TypedStorage<1, 1, bool const>       mStopNavigationOnStop;
    // NOLINTEND

public:
    // prevent constructor by default
    BreedGoal& operator=(BreedGoal const&);
    BreedGoal(BreedGoal const&);
    BreedGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BreedGoal(::Mob& animal);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& animal);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
