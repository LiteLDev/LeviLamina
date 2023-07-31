#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestData {

public:
    // prevent constructor by default
    ItemStackRequestData& operator=(ItemStackRequestData const&) = delete;
    ItemStackRequestData(ItemStackRequestData const&)            = delete;
    ItemStackRequestData()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?read\@ItemStackRequestData\@\@SA?AV?$Result\@V?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestData>, std::error_code>
    read(class ReadOnlyBinaryStream&);
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
    // NOLINTEND
};
