#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraftBase.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct RecipeNetIdTag;
// clang-format on

class ItemStackRequestActionCraftRecipeOptional : public ::ItemStackRequestActionCraftBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RecipeNetId> mRecipeNetId;
    ::ll::TypedStorage<4, 4, int>           mFilteredStringIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void _write(::BinaryStream& stream) const /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 2
    virtual int getFilteredStringIndex() const /*override*/;

    // vIndex: 0
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
