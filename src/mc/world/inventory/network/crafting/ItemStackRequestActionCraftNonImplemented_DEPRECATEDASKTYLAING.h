#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraftBase.h"

class ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING : public ::ItemStackRequestActionCraftBase {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING&
    operator=(ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING const&) = delete;
    ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING(ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING const&) =
        delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getCraftAction@ItemStackRequestActionCraftBase@@UEBAPEBV1@XZ
    virtual class ItemStackRequestActionCraftBase const* getCraftAction() const;

    // vIndex: 2, symbol: ?getFilteredStringIndex@ItemStackRequestAction@@UEBAHXZ
    virtual int getFilteredStringIndex() const;

    // vIndex: 3, symbol:
    // ?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestActionCraftBase@@UEAAXAEAVBlockPalette@@_N@Z
    virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette&, bool);

    // vIndex: 4, symbol:
    // ?_write@ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream&) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING@@QEAA@XZ
    MCAPI ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING();

    // NOLINTEND
};
