#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING&
    operator=(ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&);
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&);
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_read@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCVAPI class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ?_write@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@MEBAXAEAVBinaryStream@@@Z
    MCVAPI void _write(class BinaryStream& stream) const;

    // symbol:
    // ?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@UEAAXAEAVBlockPalette@@_N@Z
    MCVAPI void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette& blockPalette, bool isClientSide);

    // NOLINTEND
};
