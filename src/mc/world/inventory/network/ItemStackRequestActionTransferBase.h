#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionTransferBase : public ::ItemStackRequestAction {
public:
    // prevent constructor by default
    ItemStackRequestActionTransferBase& operator=(ItemStackRequestActionTransferBase const&);
    ItemStackRequestActionTransferBase(ItemStackRequestActionTransferBase const&);
    ItemStackRequestActionTransferBase();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_read@ItemStackRequestActionTransferBase@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCVAPI class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ?_write@ItemStackRequestActionTransferBase@@MEBAXAEAVBinaryStream@@@Z
    MCVAPI void _write(class BinaryStream&) const;

    // symbol: ??1ItemStackRequestActionTransferBase@@UEAA@XZ
    MCVAPI ~ItemStackRequestActionTransferBase();

    // symbol: ?getSrc@ItemStackRequestActionTransferBase@@QEBAAEBUItemStackRequestSlotInfo@@XZ
    MCAPI struct ItemStackRequestSlotInfo const& getSrc() const;

    // NOLINTEND
};
