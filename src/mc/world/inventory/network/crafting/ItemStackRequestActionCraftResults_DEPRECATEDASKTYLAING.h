#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING&
    operator=(ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&);
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&);

public:
    // NOLINTBEGIN
    MCVAPI class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCVAPI void _write(class BinaryStream& stream) const;

    MCVAPI void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette& blockPalette, bool isClientSide);

    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForItemStackRequestAction();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI void _write$(class BinaryStream& stream) const;

    MCAPI void postLoadItems_DEPRECATEDASKTYLAING$(class BlockPalette& blockPalette, bool isClientSide);

    // NOLINTEND
};
