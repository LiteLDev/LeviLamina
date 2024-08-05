#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"

class BlockSourceComponent {
public:
    // prevent constructor by default
    BlockSourceComponent& operator=(BlockSourceComponent const&);
    BlockSourceComponent(BlockSourceComponent const&);
    BlockSourceComponent();

public:
    // NOLINTBEGIN
    MCAPI explicit BlockSourceComponent(class WeakRef<class BlockSource>);

    MCAPI class StackRefResult<class BlockSource> tryGetBlockSource() const;

    // NOLINTEND
};
