#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct PlayerEmoteEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
    ::ll::TypedStorage<8, 32, ::std::string>   mEmotePieceId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerEmoteEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
