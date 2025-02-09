#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct MessageEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>              mMessageId;
    ::ll::TypedStorage<8, 32, ::std::string>              mMessageValue;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MessageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
