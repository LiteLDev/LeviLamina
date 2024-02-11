#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionCreate : public ::ItemStackRequestAction {
public:
    // prevent constructor by default
    ItemStackRequestActionCreate& operator=(ItemStackRequestActionCreate const&);
    ItemStackRequestActionCreate(ItemStackRequestActionCreate const&);
    ItemStackRequestActionCreate();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemStackRequestActionCreate@@UEAA@XZ
    virtual ~ItemStackRequestActionCreate() = default;

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionCreate@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionCreate@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
