#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

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

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0ItemStackRequestActionTransferBase@@IEAA@W4ItemStackRequestActionType@@_N1@Z
    MCAPI ItemStackRequestActionTransferBase(
        ::ItemStackRequestActionType actionType,
        bool                         isDstSerialized,
        bool                         isAmountSerialized
    );

    // NOLINTEND
};
