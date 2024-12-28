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
    ::ll::UntypedStorage<8, 16> mUnk46a629;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorTickNeededComponent& operator=(ActorTickNeededComponent const&);
    ActorTickNeededComponent(ActorTickNeededComponent const&);
    ActorTickNeededComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorTickNeededComponent(::BlockSource& region);

    MCAPI ::WeakRef<::BlockSource> getBlockSource();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& region);
    // NOLINTEND
};
