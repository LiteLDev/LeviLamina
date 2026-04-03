#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEditionProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf61746;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEditionProperties& operator=(GameEditionProperties const&);
    GameEditionProperties(GameEditionProperties const&);
    GameEditionProperties();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
