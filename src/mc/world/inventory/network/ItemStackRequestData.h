#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTDATA
public:
    ItemStackRequestData& operator=(ItemStackRequestData const&) = delete;
    ItemStackRequestData(ItemStackRequestData const&)            = delete;
    ItemStackRequestData()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?tryFindAction\@ItemStackRequestData\@\@QEBAPEBVItemStackRequestAction\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    MCAPI class ItemStackRequestAction const* tryFindAction(enum class ItemStackRequestActionType) const;
    /**
     * @symbol ?write\@ItemStackRequestData\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const;
    /**
     * @symbol ??1ItemStackRequestData\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestData();
    /**
     * @symbol
     * ?read\@ItemStackRequestData\@\@SA?AV?$Result\@V?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestData>, class std::error_code>
    read(class ReadOnlyBinaryStream&);
};
