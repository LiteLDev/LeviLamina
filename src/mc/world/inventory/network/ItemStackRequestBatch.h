#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestBatch {
public:
    // prevent constructor by default
    ItemStackRequestBatch& operator=(ItemStackRequestBatch const&);
    ItemStackRequestBatch(ItemStackRequestBatch const&);
    ItemStackRequestBatch();

public:
    // NOLINTBEGIN
    // symbol: ?write@ItemStackRequestBatch@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream& stream) const;

    // symbol: ??1ItemStackRequestBatch@@QEAA@XZ
    MCAPI ~ItemStackRequestBatch();

    // symbol:
    // ?read@ItemStackRequestBatch@@SA?AV?$Result@V?$unique_ptr@VItemStackRequestBatch@@U?$default_delete@VItemStackRequestBatch@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestBatch>>
    read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
