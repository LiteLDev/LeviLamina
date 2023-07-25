#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionTransferBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTRANSFERBASE
public:
    ItemStackRequestActionTransferBase& operator=(ItemStackRequestActionTransferBase const&) = delete;
    ItemStackRequestActionTransferBase(ItemStackRequestActionTransferBase const&)            = delete;
    ItemStackRequestActionTransferBase()                                                     = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONTRANSFERBASE
    /**
     * @symbol
     * ?_read\@ItemStackRequestActionTransferBase\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCVAPI class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?_write\@ItemStackRequestActionTransferBase\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    MCVAPI void _write(class BinaryStream&) const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemStackRequestActionTransferBase();
#endif
    /**
     * @symbol ?getSrc\@ItemStackRequestActionTransferBase\@\@QEBAAEBUItemStackRequestSlotInfo\@\@XZ
     */
    MCAPI struct ItemStackRequestSlotInfo const& getSrc() const;
};
