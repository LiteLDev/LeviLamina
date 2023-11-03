#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockComponentDirectData {
public:
    // BlockComponentDirectData inner types define
    enum class LayerBitMask {};

public:
    // prevent constructor by default
    BlockComponentDirectData& operator=(BlockComponentDirectData const&);
    BlockComponentDirectData(BlockComponentDirectData const&);
    BlockComponentDirectData();

public:
    // NOLINTBEGIN
    // symbol: ?finalize@BlockComponentDirectData@@QEAAXAEBVBlock@@W4LayerBitMask@1@@Z
    MCAPI void finalize(class Block const&, ::BlockComponentDirectData::LayerBitMask);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_finalizeInit@BlockComponentDirectData@@AEAAXAEBVBlock@@@Z
    MCAPI void _finalizeInit(class Block const&);

    // NOLINTEND
};
