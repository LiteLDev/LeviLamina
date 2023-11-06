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

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ItemStackRequestActionCreate();

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionCreate@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream&) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionCreate@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ItemStackRequestActionCreate@@QEAA@XZ
    MCAPI ItemStackRequestActionCreate();

    // NOLINTEND
};
