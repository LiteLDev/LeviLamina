#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEditionProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1e1a36;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEditionProperties& operator=(GameEditionProperties const&);
    GameEditionProperties(GameEditionProperties const&);
    GameEditionProperties();
};
