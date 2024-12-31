#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class ItemStack;
class Mob;
// clang-format on

class SnackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2c5e87;
    ::ll::UntypedStorage<8, 24> mUnke35d76;
    ::ll::UntypedStorage<8, 8>  mUnkb7787d;
    ::ll::UntypedStorage<4, 4>  mUnk8ea1a9;
    ::ll::UntypedStorage<4, 4>  mUnkcb1e56;
    ::ll::UntypedStorage<4, 4>  mUnk5af591;
    ::ll::UntypedStorage<8, 40> mUnk2ff079;
    ::ll::UntypedStorage<8, 8>  mUnkf96a22;
    // NOLINTEND

public:
    // prevent constructor by default
    SnackGoal& operator=(SnackGoal const&);
    SnackGoal(SnackGoal const&);
    SnackGoal();

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
    virtual ~SnackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    SnackGoal(::Mob& mob, ::std::vector<::ItemDescriptor> const& itemList, float cooldown, float min, float stopChance);

    MCAPI bool _hasSnackableItems();

    MCAPI void _updateHand(::ItemStack const& item);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& CHEW_CHANCE();

    MCAPI static int const& EATING_TIME();

    MCAPI static float const& PATH_RANGE();

    MCAPI static int const& RANDOM_EATING_END();

    MCAPI static int const& RANDOM_EATING_START();

    MCAPI static float const& SEARCH_SIZE();

    MCAPI static float const& STOP_DIST_SQRD();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Mob& mob, ::std::vector<::ItemDescriptor> const& itemList, float cooldown, float min, float stopChance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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

    MCAPI int $getRandomEatingEnd() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
