#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

class ItemStackRequestActionDrop : public ::ItemStackRequestActionTransferBase {
public:
    // prevent constructor by default
    ItemStackRequestActionDrop& operator=(ItemStackRequestActionDrop const&) = delete;
    ItemStackRequestActionDrop(ItemStackRequestActionDrop const&)            = delete;
    ItemStackRequestActionDrop()                                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getCraftAction@ItemStackRequestAction@@UEBAPEBVItemStackRequestActionCraftBase@@XZ
    virtual class ItemStackRequestActionCraftBase const* getCraftAction() const;

    // vIndex: 2, symbol: ?getFilteredStringIndex@ItemStackRequestAction@@UEBAHXZ
    virtual int getFilteredStringIndex() const;

    // vIndex: 3, symbol:
    // ?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestActionCraftBase@@UEAAXAEAVBlockPalette@@_N@Z
    virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette&, bool);

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionDrop@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream&) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionDrop@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
