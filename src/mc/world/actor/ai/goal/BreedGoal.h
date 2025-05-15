#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec2;
class Vec3;
// clang-format on

class BreedGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>           mOwner;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPartner;
    ::ll::TypedStorage<4, 4, int>              mLoveTime;
    ::ll::TypedStorage<4, 4, float const>      mSpeed;
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
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~BreedGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isCloseEnoughToBreed(::Vec3 pos1, ::Vec2 size1, ::Vec3 pos2, ::Vec2 size2) const;

    MCAPI ::Mob* _moveToFreePartner() const;
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
