#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockSourceListener.h"

class BlockSourceHandle : public ::BlockSourceListener {
public:
    // prevent constructor by default
    BlockSourceHandle& operator=(BlockSourceHandle const&);
    BlockSourceHandle(BlockSourceHandle const&);
    BlockSourceHandle();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSourceHandle() = default;

    // vIndex: 2
    virtual void onSourceDestroyed(class BlockSource& source);

    // NOLINTEND
};
