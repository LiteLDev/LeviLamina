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
    virtual ~PlayerSleepPercentageGetter() /*override*/ = default;

    // vIndex: 1
    virtual float getPlayerSleepPercentageGoal() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getPlayerSleepPercentageGoal() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
