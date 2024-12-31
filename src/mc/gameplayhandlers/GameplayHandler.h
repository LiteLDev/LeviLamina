#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameplayHandler {
public:
    // prevent constructor by default
    GameplayHandler& operator=(GameplayHandler const&);
    GameplayHandler(GameplayHandler const&);
    GameplayHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameplayHandler() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
