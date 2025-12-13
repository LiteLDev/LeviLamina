#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemInstance;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING : public ::ItemStackRequestAction,
                                                                public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk5c8ddd;
    ::ll::UntypedStorage<8, 24> mUnk77cf9a;
    ::ll::UntypedStorage<8, 24> mUnk85931f;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING&
    operator=(ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&);
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(
        ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&
    );
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide) /*override*/;

    virtual void _write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(::ItemInstance craftResult);

    MCNAPI_C ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(
        ::std::vector<::ItemInstance> const& craftResults,
        uchar                                numCrafts
    );

    MCNAPI_C void _updateCraftResults(::std::vector<::ItemInstance> const& craftResults);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ItemInstance craftResult);

    MCNAPI_C void* $ctor(::std::vector<::ItemInstance> const& craftResults, uchar numCrafts);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);

    MCNAPI void $_write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForItemStackRequestAction();
    // NOLINTEND
};
