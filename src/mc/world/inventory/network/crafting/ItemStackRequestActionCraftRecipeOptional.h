#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraftBase.h"

class ItemStackRequestActionCraftRecipeOptional : public ::ItemStackRequestActionCraftBase {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeOptional& operator=(ItemStackRequestActionCraftRecipeOptional const&);
    ItemStackRequestActionCraftRecipeOptional(ItemStackRequestActionCraftRecipeOptional const&);
    ItemStackRequestActionCraftRecipeOptional();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemStackRequestActionCraftRecipeOptional@@UEAA@XZ
    virtual ~ItemStackRequestActionCraftRecipeOptional() = default;

    // vIndex: 2, symbol: ?getFilteredStringIndex@ItemStackRequestActionCraftRecipeOptional@@UEBAHXZ
    virtual int getFilteredStringIndex() const;

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionCraftRecipeOptional@@UEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionCraftRecipeOptional@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
