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
class NetworkItemInstanceDescriptor;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING : public ::ItemStackRequestAction,
                                                                public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                           mNumCrafts;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkItemInstanceDescriptor>> mCraftResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                  mLoadedCraftResults;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide) /*override*/;

    virtual void _write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(::ItemInstance craftResult);

    MCNAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(
        ::std::vector<::ItemInstance> const& craftResults,
        uchar                                numCrafts
    );
#endif

    MCNAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(
        ::std::vector<::NetworkItemInstanceDescriptor> craftResults,
        uchar                                          numCrafts
    );

#ifdef LL_PLAT_C
    MCNAPI void _updateCraftResults(::std::vector<::ItemInstance> const& craftResults);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ItemInstance craftResult);

    MCNAPI void* $ctor(::std::vector<::ItemInstance> const& craftResults, uchar numCrafts);
#endif

    MCNAPI void* $ctor(::std::vector<::NetworkItemInstanceDescriptor> craftResults, uchar numCrafts);
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
