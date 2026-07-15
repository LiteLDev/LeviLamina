#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class MountPathingGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>               mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>> mTarget;
    ::ll::TypedStorage<4, 4, float>                mSpeed;
    ::ll::TypedStorage<4, 4, float>                mMinTargetDistanceSquared;
    ::ll::TypedStorage<1, 1, bool>                 mTrackTarget;
    ::ll::TypedStorage<4, 4, int>                  mTimeToRecalculatePath;
    // NOLINTEND

public:
    // prevent constructor by default
    MountPathingGoal& operator=(MountPathingGoal const&);
    MountPathingGoal(MountPathingGoal const&);
    MountPathingGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
