#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/IPlayerSleepPercentageGetter.h"

// auto generated forward declare list
// clang-format off
class GameRules;
// clang-format on

class PlayerSleepPercentageGetter : public ::IPlayerSleepPercentageGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameRules const> const> mGameRules;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerSleepPercentageGetter() /*override*/ = default;

    virtual float getPlayerSleepPercentageGoal() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getPlayerSleepPercentageGoal() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
