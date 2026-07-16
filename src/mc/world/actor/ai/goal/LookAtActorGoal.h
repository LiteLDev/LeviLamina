#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class LookAtActorGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>> mLookAt;
    ::ll::TypedStorage<4, 4, float>                mLookDistance;
    ::ll::TypedStorage<4, 4, int>                  mAngleOfViewX;
    ::ll::TypedStorage<4, 4, int>                  mAngleOfViewY;
    ::ll::TypedStorage<4, 4, int>                  mLookTime;
    ::ll::TypedStorage<4, 4, int>                  mMinLookTime;
    ::ll::TypedStorage<4, 4, int>                  mMaxLookTime;
    ::ll::TypedStorage<4, 4, float>                mProbability;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>  mTargetFilter;
    ::ll::TypedStorage<8, 8, ::Mob&>               mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtActorGoal& operator=(LookAtActorGoal const&);
    LookAtActorGoal(LookAtActorGoal const&);
    LookAtActorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LookAtActorGoal() /*override*/ = default;

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
