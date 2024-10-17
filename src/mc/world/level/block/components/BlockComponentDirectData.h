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
    MCAPI void finalize(class Block const& block, ::BlockComponentDirectData::LayerBitMask layersToFinalize);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _finalizeInit(class Block const& block);

    // NOLINTEND
};
