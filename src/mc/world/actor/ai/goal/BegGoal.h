#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 8>  mUnk55ef32;
    ::ll::UntypedStorage<4, 4>  mUnkcbd50d;
    ::ll::UntypedStorage<4, 4>  mUnkf62eda;
    ::ll::UntypedStorage<4, 4>  mUnk2158a8;
    ::ll::UntypedStorage<4, 4>  mUnka69381;
    ::ll::UntypedStorage<8, 40> mUnk6ccd4e;
    ::ll::UntypedStorage<8, 24> mUnk5fe9e3;
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
    virtual ~BegGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BegGoal(
        ::Mob&                                 tamableAnimal,
        ::std::vector<::ItemDescriptor> const& itemList,
        float                                  lookDistance,
        int                                    minLookTime,
        int                                    maxLookTime
    );

    MCAPI bool _playerHoldingInteresting(::Player* player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                 tamableAnimal,
        ::std::vector<::ItemDescriptor> const& itemList,
        float                                  lookDistance,
        int                                    minLookTime,
        int                                    maxLookTime
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
