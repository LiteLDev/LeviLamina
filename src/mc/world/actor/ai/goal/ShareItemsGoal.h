#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
struct MobDescriptor;
// clang-format on

class ShareItemsGoal : public ::Goal {
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

    virtual ~ShareItemsGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::pair<int, ::ItemStack>
    selectEntityToShareWith(::std::vector<::std::pair<int, ::ItemStack>> const& shareableItems);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
