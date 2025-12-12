#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
// clang-format on

class RandomHoverGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<4, 4, float const>               mSpeedModifier;
    ::ll::TypedStorage<4, 4, int const>                 mInterval;
    ::ll::TypedStorage<4, 4, float const>               mXZDist;
    ::ll::TypedStorage<4, 4, float const>               mYDist;
    ::ll::TypedStorage<4, 4, float>                     mYOffset;
    ::ll::TypedStorage<4, 8, ::IntRange>                mHoverHeight;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomHoverGoal& operator=(RandomHoverGoal const&);
    RandomHoverGoal(RandomHoverGoal const&);
    RandomHoverGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~RandomHoverGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _computeNewTarget();

    MCNAPI ::std::unique_ptr<::Path> _findNewTarget() const;

    MCNAPI bool _mobMeetsPreconditions() const;

    MCNAPI void _moveToTarget();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI void $tick();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
