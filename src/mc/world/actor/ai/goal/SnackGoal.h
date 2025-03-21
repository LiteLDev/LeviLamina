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
    MCAPI bool _hasSnackableItems();

    MCAPI bool _isSnackableItem(::ItemStack const& item) const;

    MCFOLD void _updateHand(::ItemStack const& item);
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

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCFOLD int $getRandomEatingEnd() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
