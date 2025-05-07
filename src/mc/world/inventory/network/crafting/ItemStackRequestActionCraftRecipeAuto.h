#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct RecipeNetIdTag;
// clang-format on

class ItemStackRequestActionCraftRecipeAuto : public ::ItemStackRequestActionCraft<::RecipeNetId, 13> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk89b09e;
    ::ll::UntypedStorage<1, 1>  mUnk3ebc43;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeAuto& operator=(ItemStackRequestActionCraftRecipeAuto const&);
    ItemStackRequestActionCraftRecipeAuto(ItemStackRequestActionCraftRecipeAuto const&);
    ItemStackRequestActionCraftRecipeAuto();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void _write(::BinaryStream& stream) const /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~ItemStackRequestActionCraftRecipeAuto() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
