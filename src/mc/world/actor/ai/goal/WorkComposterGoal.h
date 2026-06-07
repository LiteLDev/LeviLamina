#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/WorkGoal.h"

// auto generated forward declare list
// clang-format off
class ContainerComponent;
class Mob;
// clang-format on

class WorkComposterGoal : public ::WorkGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    mMinUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>    mMaxUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>    mMaxItemsPerUse;
    ::ll::TypedStorage<4, 4, int>    mMaxBlockInteractions;
    ::ll::TypedStorage<1, 1, bool>   mCanFillComposter;
    ::ll::TypedStorage<1, 1, bool>   mCanEmptyComposter;
    ::ll::TypedStorage<4, 4, int>    mMinItemCount;
    ::ll::TypedStorage<4, 4, int>    mTimesComposted;
    ::ll::TypedStorage<8, 8, uint64> mNextUseTick;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkComposterGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void start() /*override*/;

    virtual void useWorkstation() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorkComposterGoal(::Mob& mob);

    MCAPI ::std::pair<int, int> _findCompostableItemSlot(::ContainerComponent& inventory);

    MCAPI bool _tryCompostItems();

    MCAPI bool _tryEmptyComposter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCAPI void $useWorkstation();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
