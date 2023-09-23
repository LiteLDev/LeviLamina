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
    // symbol:
    // ?getRequests@ItemStackRequestBatch@@QEBAAEBV?$vector@V?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@V?$allocator@V?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestData>> const& getRequests() const;

    // symbol:
    // ?takeRequests@ItemStackRequestBatch@@QEBA?AV?$vector@V?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@V?$allocator@V?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestData>> takeRequests() const;

    // symbol: ?write@ItemStackRequestBatch@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // symbol: ??1ItemStackRequestBatch@@QEAA@XZ
    MCAPI ~ItemStackRequestBatch();

    // symbol:
    // ?read@ItemStackRequestBatch@@SA?AV?$Result@V?$unique_ptr@VItemStackRequestBatch@@U?$default_delete@VItemStackRequestBatch@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestBatch>, std::error_code>
    read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
