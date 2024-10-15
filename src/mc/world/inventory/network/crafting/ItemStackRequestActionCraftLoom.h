#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraftBase.h"

class ItemStackRequestActionCraftLoom : public ::ItemStackRequestActionCraftBase {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftLoom& operator=(ItemStackRequestActionCraftLoom const&);
    ItemStackRequestActionCraftLoom(ItemStackRequestActionCraftLoom const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionCraftLoom() = default;

    // vIndex: 4
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ItemStackRequestActionCraftLoom();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI void _write$(class BinaryStream& stream) const;

    // NOLINTEND
};
