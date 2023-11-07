#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftRecipeAuto {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeAuto& operator=(ItemStackRequestActionCraftRecipeAuto const&);
    ItemStackRequestActionCraftRecipeAuto(ItemStackRequestActionCraftRecipeAuto const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ItemStackRequestActionCraftRecipeAuto() = default;

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionCraftRecipeAuto@@UEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream&) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionCraftRecipeAuto@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // vIndex: 6, symbol: ?getRecipeNetId@ItemStackRequestActionCraftGrindstone@@UEBAAEBUItemStackNetIdVariant@@XZ
    virtual struct ItemStackNetIdVariant const& getRecipeNetId() const;

    // symbol: ??0ItemStackRequestActionCraftRecipeAuto@@QEAA@XZ
    MCAPI ItemStackRequestActionCraftRecipeAuto();

    // NOLINTEND
};
