#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
class HashedString;
// clang-format on

struct GameEventPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString const> mHashedName;
    ::ll::TypedStorage<8, 8, ::GameEvent const&>    mGameEvent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GameEventPair();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
