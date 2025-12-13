#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
// clang-format on

struct GameEventPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString const> mHashedName;
    ::ll::TypedStorage<8, 8, ::GameEvent const&>    mGameEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventPair& operator=(GameEventPair const&);
    GameEventPair(GameEventPair const&);
    GameEventPair();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GameEventPair();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
