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
    // vIndex: 0, symbol: ??1ItemStackRequestActionTransferBase@@UEAA@XZ
    virtual ~ItemStackRequestActionTransferBase();

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionTransferBase@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionTransferBase@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ?getAmount@ItemStackRequestActionTransferBase@@QEBAEXZ
    MCAPI uchar getAmount() const;

    // symbol: ?getDst@ItemStackRequestActionTransferBase@@QEBAAEBUItemStackRequestSlotInfo@@XZ
    MCAPI struct ItemStackRequestSlotInfo const& getDst() const;

    // symbol: ?getSrc@ItemStackRequestActionTransferBase@@QEBAAEBUItemStackRequestSlotInfo@@XZ
    MCAPI struct ItemStackRequestSlotInfo const& getSrc() const;

    // NOLINTEND
};
