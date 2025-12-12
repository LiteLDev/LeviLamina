#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct MobDescriptor;
// clang-format on

class FollowCaravanGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>>                    mParent;
    ::ll::TypedStorage<4, 4, float>                                 mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                 mSpeedModifierO;
    ::ll::TypedStorage<4, 4, int>                                   mDistanceCheckCounter;
    ::ll::TypedStorage<4, 4, int>                                   mCaravanSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor> const> mTargetTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowCaravanGoal& operator=(FollowCaravanGoal const&);
    FollowCaravanGoal(FollowCaravanGoal const&);
    FollowCaravanGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~FollowCaravanGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool checkCaravanType(::Mob* currentMob);

    MCNAPI bool firstIsLeashed(::Mob* currentMob, int counter);
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
