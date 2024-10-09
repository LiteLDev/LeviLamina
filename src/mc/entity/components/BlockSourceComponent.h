#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

class BlockSourceComponent {
public:
    // prevent constructor by default
    BlockSourceComponent& operator=(BlockSourceComponent const&);
    BlockSourceComponent(BlockSourceComponent const&);
    BlockSourceComponent();

public:
    // NOLINTBEGIN
    MCAPI explicit BlockSourceComponent(class WeakRef<class BlockSource> weakBlockSource);

    MCAPI class StackRefResult<class BlockSource> tryGetBlockSource() const;

    // NOLINTEND
};
