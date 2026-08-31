#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class Mob;
class Player;
// clang-format on

class BegGoal : public ::BaseGoal {
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
