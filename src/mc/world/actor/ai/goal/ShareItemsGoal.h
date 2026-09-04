#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
struct MobDescriptor;
// clang-format on

class ShareItemsGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                          mMob;
    ::ll::TypedStorage<4, 4, int>                             mThrowCountdown;
    ::ll::TypedStorage<4, 4, int>                             mSearchRange;
    ::ll::TypedStorage<4, 4, float>                           mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                           mGoalRadiusSq;
    ::ll::TypedStorage<4, 4, int>                             mTimeToRecalcPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mMobFilters;
    ::ll::TypedStorage<8, 152, ::ItemStack>                   mItemToShare;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>       mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    ShareItemsGoal& operator=(ShareItemsGoal const&);
    ShareItemsGoal(ShareItemsGoal const&);
    ShareItemsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

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
