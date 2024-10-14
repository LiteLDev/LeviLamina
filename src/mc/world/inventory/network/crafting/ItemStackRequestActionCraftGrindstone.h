#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class ItemStackRequestActionCraftGrindstone {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftGrindstone& operator=(ItemStackRequestActionCraftGrindstone const&);
    ItemStackRequestActionCraftGrindstone(ItemStackRequestActionCraftGrindstone const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionCraftGrindstone() = default;

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

    MCAPI ItemStackRequestActionCraftGrindstone();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI void _write$(class BinaryStream& stream) const;

    MCAPI class ItemStackRequestActionCraftBase const* getCraftAction$() const;

    MCAPI int getFilteredStringIndex$() const;

    MCAPI struct ItemStackNetIdVariant const& getRecipeNetId$() const;

    MCAPI void postLoadItems_DEPRECATEDASKTYLAING$(class BlockPalette& blockPalette, bool isClientSide);

    // NOLINTEND
};
