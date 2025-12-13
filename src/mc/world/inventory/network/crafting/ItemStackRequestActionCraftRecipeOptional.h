#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraftBase.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftRecipeOptional : public ::ItemStackRequestActionCraftBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk67cf23;
    ::ll::UntypedStorage<4, 4> mUnkaaddc8;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeOptional& operator=(ItemStackRequestActionCraftRecipeOptional const&);
    ItemStackRequestActionCraftRecipeOptional(ItemStackRequestActionCraftRecipeOptional const&);
    ItemStackRequestActionCraftRecipeOptional();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual int getFilteredStringIndex() const /*override*/;

    virtual ~ItemStackRequestActionCraftRecipeOptional() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);

    MCNAPI int $getFilteredStringIndex() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
