#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class ItemStackRequestActionCraftRecipeAuto {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeAuto& operator=(ItemStackRequestActionCraftRecipeAuto const&);
    ItemStackRequestActionCraftRecipeAuto(ItemStackRequestActionCraftRecipeAuto const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionCraftRecipeAuto() = default;

    // vIndex: 1
    virtual class ItemStackRequestActionCraftBase const* getCraftAction() const;

    // vIndex: 2
    virtual int getFilteredStringIndex() const;

    // vIndex: 3
    virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // vIndex: 6
    virtual struct ItemStackNetIdVariant const& getRecipeNetId() const;

    MCAPI ItemStackRequestActionCraftRecipeAuto();

    // NOLINTEND
};
