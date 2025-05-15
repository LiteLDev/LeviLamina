#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class Mob;
class Player;
// clang-format on

class BegGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                           mMob;
    ::ll::TypedStorage<4, 4, float>                            mLookDistance;
    ::ll::TypedStorage<4, 4, int>                              mLookTime;
    ::ll::TypedStorage<4, 4, int>                              mMinLookTime;
    ::ll::TypedStorage<4, 4, int>                              mMaxLookTime;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Player>>            mPlayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    BegGoal& operator=(BegGoal const&);
    BegGoal(BegGoal const&);
    BegGoal();

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
    virtual ~BegGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _playerHoldingInteresting(::Player* player);
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
