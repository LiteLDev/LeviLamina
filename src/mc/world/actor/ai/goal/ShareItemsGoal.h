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
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~ShareItemsGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::pair<int, ::ItemStack>
    selectEntityToShareWith(::std::vector<::std::pair<int, ::ItemStack>> const& shareableItems);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
