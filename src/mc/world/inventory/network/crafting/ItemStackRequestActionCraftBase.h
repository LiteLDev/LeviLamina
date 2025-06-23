#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftBase : public ::ItemStackRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mNumCrafts;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::ItemStackRequestActionCraftBase const* getCraftAction() const /*override*/;

    // vIndex: 3
    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide) /*override*/;

    // vIndex: 4
    virtual void _write(::BinaryStream&) const = 0;

    // vIndex: 5
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) = 0;

    // vIndex: 0
    virtual ~ItemStackRequestActionCraftBase() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackRequestActionCraftBase const* $getCraftAction() const;

    MCNAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);
    // NOLINTEND
};
