#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveTowardsTargetGoal.h"

class FollowTargetCaptainGoal : public ::MoveTowardsTargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mLocateAttempts;
    ::ll::TypedStorage<4, 4, float> mFollowDistSq;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void stop() /*override*/;

    virtual ~FollowTargetCaptainGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _determineMovePos();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI void $tick();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $stop();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
