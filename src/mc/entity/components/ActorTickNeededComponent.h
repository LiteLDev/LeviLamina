#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class ActorTickNeededComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WeakRef<::BlockSource>> mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorTickNeededComponent& operator=(ActorTickNeededComponent const&);
    ActorTickNeededComponent(ActorTickNeededComponent const&);
    ActorTickNeededComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorTickNeededComponent(::ActorTickNeededComponent&& other);

    MCAPI explicit ActorTickNeededComponent(::BlockSource& region);

    MCFOLD ::WeakRef<::BlockSource> getBlockSource();

    MCAPI ::ActorTickNeededComponent& operator=(::ActorTickNeededComponent&& other);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorTickNeededComponent&& other);

    MCAPI void* $ctor(::BlockSource& region);
    // NOLINTEND
};
