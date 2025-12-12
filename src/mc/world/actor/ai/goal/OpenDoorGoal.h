#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/DoorInteractGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class OpenDoorGoal : public ::DoorInteractGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mCloseDoor;
    ::ll::TypedStorage<4, 4, int>    mForgetTime;
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenDoorGoal& operator=(OpenDoorGoal const&);
    OpenDoorGoal(OpenDoorGoal const&);
    OpenDoorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~OpenDoorGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
