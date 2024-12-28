#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameEventPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk95b639;
    ::ll::UntypedStorage<8, 8>  mUnkc9e5b4;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventPair& operator=(GameEventPair const&);
    GameEventPair(GameEventPair const&);
    GameEventPair();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GameEventPair();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
