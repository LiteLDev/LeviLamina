#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

class BlockSourceHandle : public ::BlockSourceListener {
public:
    // prevent constructor by default
    BlockSourceHandle& operator=(BlockSourceHandle const&);
    BlockSourceHandle(BlockSourceHandle const&);
    BlockSourceHandle();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockSourceHandle@@UEAA@XZ
    virtual ~BlockSourceHandle() = default;

    // vIndex: 2, symbol: ?onSourceDestroyed@BlockSourceHandle@@UEAAXAEAVBlockSource@@@Z
    virtual void onSourceDestroyed(class BlockSource& source);

    // NOLINTEND
};
