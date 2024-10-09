#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

class ActorTickNeededComponent {
public:
    // prevent constructor by default
    ActorTickNeededComponent& operator=(ActorTickNeededComponent const&);
    ActorTickNeededComponent(ActorTickNeededComponent const&);
    ActorTickNeededComponent();

public:
    // NOLINTBEGIN
    MCAPI ActorTickNeededComponent(class ActorTickNeededComponent&& other);

    MCAPI explicit ActorTickNeededComponent(class BlockSource& region);

    MCAPI class WeakRef<class BlockSource> getBlockSource();

    MCAPI class ActorTickNeededComponent& operator=(class ActorTickNeededComponent&& other);

    MCAPI ~ActorTickNeededComponent();

    // NOLINTEND
};
