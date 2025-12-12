#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class HoverGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>  mMob;
    ::ll::TypedStorage<4, 4, float>   mSpeedMultiplier;
    ::ll::TypedStorage<4, 12, ::Vec3> mStartPos;
    // NOLINTEND

public:
    // prevent constructor by default
    HoverGoal& operator=(HoverGoal const&);
    HoverGoal(HoverGoal const&);
    HoverGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual void stop() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~HoverGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI void $tick();

    MCNAPI void $stop();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
