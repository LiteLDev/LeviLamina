#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct ItemStackNetIdVariant;
// clang-format on

class ItemStackRequestActionCraftGrindstone : public ::ItemStackRequestActionCraft<::ItemStackNetIdVariant, 16> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk52d9fe;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftGrindstone& operator=(ItemStackRequestActionCraftGrindstone const&);
    ItemStackRequestActionCraftGrindstone(ItemStackRequestActionCraftGrindstone const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void _write(::BinaryStream& stream) const /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 6
    virtual ::ItemStackNetIdVariant const& getRecipeNetId() const /*override*/;

    // vIndex: 0
    virtual ~ItemStackRequestActionCraftGrindstone() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackRequestActionCraftGrindstone();

    MCAPI int getRepairCost() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);

    MCAPI ::ItemStackNetIdVariant const& $getRecipeNetId() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
