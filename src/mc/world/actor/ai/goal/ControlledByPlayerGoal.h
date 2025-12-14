#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class ControlledByPlayerGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, float>  mFractionalRotation;
    ::ll::TypedStorage<4, 4, float>  mFractionalRotationLimit;
    ::ll::TypedStorage<4, 4, float>  mSpeedMultiplier;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlledByPlayerGoal& operator=(ControlledByPlayerGoal const&);
    ControlledByPlayerGoal(ControlledByPlayerGoal const&);
    ControlledByPlayerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~ControlledByPlayerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canBeControlledByPassenger();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
