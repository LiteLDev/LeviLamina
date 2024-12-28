#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameplayUserSuspension {
public:
    // GameplayUserSuspension inner types define
    enum class State : int {
        Suspend = 0,
        Resume  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcabae6;
    ::ll::UntypedStorage<4, 4>  mUnkb21e1d;
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayUserSuspension& operator=(GameplayUserSuspension const&);
    GameplayUserSuspension(GameplayUserSuspension const&);
    GameplayUserSuspension();
};
