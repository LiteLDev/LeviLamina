#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestBatch {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTBATCH
public:
    ItemStackRequestBatch& operator=(ItemStackRequestBatch const&) = delete;
    ItemStackRequestBatch(ItemStackRequestBatch const&)            = delete;
    ItemStackRequestBatch()                                        = delete;
#endif

public:
    /**
     * @symbol ?write\@ItemStackRequestBatch\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const;
    /**
     * @symbol ??1ItemStackRequestBatch\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestBatch();
    /**
     * @symbol
     * ?read\@ItemStackRequestBatch\@\@SA?AV?$Result\@V?$unique_ptr\@VItemStackRequestBatch\@\@U?$default_delete\@VItemStackRequestBatch\@\@\@std\@\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestBatch>, class std::error_code>
    read(class ReadOnlyBinaryStream&);
};
