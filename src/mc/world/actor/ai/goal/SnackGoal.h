#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemStack;
class Mob;
class Path;
// clang-format on

class SnackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                           mMob;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mItems;
    ::ll::TypedStorage<8, 8, uint64>                           mCooldown;
    ::ll::TypedStorage<4, 4, int const>                        mSnackCooldownTotal;
    ::ll::TypedStorage<4, 4, int const>                        mCooldownMin;
    ::ll::TypedStorage<4, 4, int const>                        mStopChance;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>             mTarget;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>        mPath;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 10
    virtual int getRandomEatingEnd() const;

    // vIndex: 0
    virtual ~SnackGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _hasSnackableItems();

    MCNAPI bool _isSnackableItem(::ItemStack const& item) const;

    MCNAPI void _updateHand(::ItemStack const& item);
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

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI int $getRandomEatingEnd() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
