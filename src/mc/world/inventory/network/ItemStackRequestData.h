#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class ItemStackRequestData {
public:
    // prevent constructor by default
    ItemStackRequestData& operator=(ItemStackRequestData const&);
    ItemStackRequestData(ItemStackRequestData const&);
    ItemStackRequestData();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getActions@ItemStackRequestData@@QEBAAEBV?$vector@V?$unique_ptr@VItemStackRequestAction@@U?$default_delete@VItemStackRequestAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VItemStackRequestAction@@U?$default_delete@VItemStackRequestAction@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestAction>> const& getActions() const;

    // symbol: ?tryFindAction@ItemStackRequestData@@QEBAPEBVItemStackRequestAction@@W4ItemStackRequestActionType@@@Z
    MCAPI class ItemStackRequestAction const* tryFindAction(::ItemStackRequestActionType type) const;

    // symbol: ?write@ItemStackRequestData@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream& stream) const;

    // symbol: ??1ItemStackRequestData@@QEAA@XZ
    MCAPI ~ItemStackRequestData();

    // symbol:
    // ?read@ItemStackRequestData@@SA?AV?$Result@V?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestData>>
    read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
