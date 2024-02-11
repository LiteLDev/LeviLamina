#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftRecipeAuto {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeAuto& operator=(ItemStackRequestActionCraftRecipeAuto const&);
    ItemStackRequestActionCraftRecipeAuto(ItemStackRequestActionCraftRecipeAuto const&);
    ItemStackRequestActionCraftRecipeAuto();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemStackRequestActionCraftRecipeAuto@@UEAA@XZ
    virtual ~ItemStackRequestActionCraftRecipeAuto() = default;

    // vIndex: 1, symbol: ?getCraftAction@ItemStackRequestActionCraftBase@@UEBAPEBV1@XZ
    virtual class ItemStackRequestActionCraftBase const* getCraftAction() const;

    // vIndex: 2, symbol: ?getFilteredStringIndex@ItemStackRequestAction@@UEBAHXZ
    virtual int getFilteredStringIndex() const;

    // vIndex: 3, symbol:
    // ?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestActionCraftBase@@UEAAXAEAVBlockPalette@@_N@Z
    virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionCraftRecipeAuto@@UEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionCraftRecipeAuto@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // vIndex: 6, symbol: ?getRecipeNetId@ItemStackRequestActionCraftGrindstone@@UEBAAEBUItemStackNetIdVariant@@XZ
    virtual struct ItemStackNetIdVariant const& getRecipeNetId() const;

    // NOLINTEND
};
