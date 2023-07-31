#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING {

public:
    // prevent constructor by default
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING&
    operator=(ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&) = delete;
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&) =
        delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTRESULTS_DEPRECATEDASKTYLAING
    /**
     * @symbol
     * ?_read\@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCVAPI class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?_write\@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    MCVAPI void _write(class BinaryStream&) const;
    /**
     * @symbol
     * ?postLoadItems_DEPRECATEDASKTYLAING\@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    MCVAPI void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette&, bool);
#endif
    /**
     * @symbol ??0ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();
    // NOLINTEND
};
