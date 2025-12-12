#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInputModeChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 4, ::InputMode>                 mNewInputModeUsed;
    ::ll::TypedStorage<4, 4, ::InputMode>                 mPreviousInputModeUsed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerInputModeChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
