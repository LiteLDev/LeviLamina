#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraftBase.h"

class ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING : public ::ItemStackRequestActionCraftBase {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING&
    operator=(ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING const&);
    ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING(ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING();

    // vIndex: 4, symbol:
    // ?_write@ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream&) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING@@QEAA@XZ
    MCAPI ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING();

    // NOLINTEND
};
