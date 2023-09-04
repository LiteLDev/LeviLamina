#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftRecipeAuto {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeAuto& operator=(ItemStackRequestActionCraftRecipeAuto const&) = delete;
    ItemStackRequestActionCraftRecipeAuto(ItemStackRequestActionCraftRecipeAuto const&)            = delete;

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

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionCraftRecipeAuto@@UEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream&) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionCraftRecipeAuto@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // vIndex: 6, symbol: ?getRecipeNetId@ItemStackRequestActionCraftGrindstone@@UEBAAEBUItemStackNetIdVariant@@XZ
    virtual struct ItemStackNetIdVariant const& getRecipeNetId() const;

    // symbol: ??0ItemStackRequestActionCraftRecipeAuto@@QEAA@XZ
    MCAPI ItemStackRequestActionCraftRecipeAuto();

    // NOLINTEND
};
