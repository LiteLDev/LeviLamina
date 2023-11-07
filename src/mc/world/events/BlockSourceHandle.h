#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSourceListener.h"

class BlockSourceHandle : public ::BlockSourceListener {
public:
    // prevent constructor by default
    BlockSourceHandle& operator=(BlockSourceHandle const&);
    BlockSourceHandle(BlockSourceHandle const&);
    BlockSourceHandle();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BlockSourceHandle() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?onSourceDestroyed@BlockSourceHandle@@UEAAXAEAVBlockSource@@@Z
    virtual void onSourceDestroyed(class BlockSource&);

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // NOLINTEND
};
