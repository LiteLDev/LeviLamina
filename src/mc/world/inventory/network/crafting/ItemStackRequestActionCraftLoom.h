#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraftBase.h"

class ItemStackRequestActionCraftLoom : public ::ItemStackRequestActionCraftBase {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftLoom& operator=(ItemStackRequestActionCraftLoom const&);
    ItemStackRequestActionCraftLoom(ItemStackRequestActionCraftLoom const&);
    ItemStackRequestActionCraftLoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemStackRequestActionCraftLoom@@UEAA@XZ
    virtual ~ItemStackRequestActionCraftLoom() = default;

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionCraftLoom@@UEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionCraftLoom@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
