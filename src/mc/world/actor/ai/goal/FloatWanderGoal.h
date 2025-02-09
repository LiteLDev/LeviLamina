#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec3;
struct FloatRange;
// clang-format on

class FloatWanderGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>       mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>      mTargetPos;
    ::ll::TypedStorage<4, 4, int>          mFloatDuration;
    ::ll::TypedStorage<4, 4, float>        mFloatXZDist;
    ::ll::TypedStorage<4, 4, float>        mFloatYDist;
    ::ll::TypedStorage<4, 4, float>        mYOffset;
    ::ll::TypedStorage<1, 1, bool>         mMustReach;
    ::ll::TypedStorage<1, 1, bool>         mRandomReselect;
    ::ll::TypedStorage<4, 8, ::FloatRange> mFloatDurationRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~FloatWanderGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canReach(::Vec3 const& targetPos, float dist);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
