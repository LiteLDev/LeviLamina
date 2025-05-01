#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
// clang-format on

struct ExplosionStartedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockPos>> mBlocks;
    ::ll::TypedStorage<8, 8, ::Dimension&>                      mDimension;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>       mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ExplosionStartedEvent& operator=(ExplosionStartedEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExplosionStartedEvent(::ExplosionStartedEvent const&);

    MCNAPI ~ExplosionStartedEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExplosionStartedEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
