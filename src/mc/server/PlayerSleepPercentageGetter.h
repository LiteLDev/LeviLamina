#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/IPlayerSleepPercentageGetter.h"

class PlayerSleepPercentageGetter : public ::IPlayerSleepPercentageGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk49c20a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSleepPercentageGetter& operator=(PlayerSleepPercentageGetter const&);
    PlayerSleepPercentageGetter(PlayerSleepPercentageGetter const&);
    PlayerSleepPercentageGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerSleepPercentageGetter() /*override*/;

    // vIndex: 1
    virtual float getPlayerSleepPercentageGoal() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getPlayerSleepPercentageGoal() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
