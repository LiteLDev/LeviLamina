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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionTransferBase@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream&) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionTransferBase@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1ItemStackRequestActionTransferBase@@UEAA@XZ
    MCVAPI ~ItemStackRequestActionTransferBase();

    // symbol: ?getAmount@ItemStackRequestActionTransferBase@@QEBAEXZ
    MCAPI uchar getAmount() const;

    // symbol: ?getDst@ItemStackRequestActionTransferBase@@QEBAAEBUItemStackRequestSlotInfo@@XZ
    MCAPI struct ItemStackRequestSlotInfo const& getDst() const;

    // symbol: ?getSrc@ItemStackRequestActionTransferBase@@QEBAAEBUItemStackRequestSlotInfo@@XZ
    MCAPI struct ItemStackRequestSlotInfo const& getSrc() const;

    // NOLINTEND
};
