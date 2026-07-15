#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerTellRawCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                             mSender;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>> mTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                             mMessage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerTellRawCommandEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
