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
    MCAPI explicit ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(::ItemInstance craftResult);

    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(
        ::std::vector<::ItemInstance> const& craftResults,
        uchar                                numCrafts
    );
#endif

    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(
        ::std::vector<::NetworkItemInstanceDescriptor> craftResults,
        uchar                                          numCrafts
    );

#ifdef LL_PLAT_C
    MCAPI void _updateCraftResults(::std::vector<::ItemInstance> const& craftResults);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ItemInstance craftResult);

    MCAPI void* $ctor(::std::vector<::ItemInstance> const& craftResults, uchar numCrafts);
#endif

    MCAPI void* $ctor(::std::vector<::NetworkItemInstanceDescriptor> craftResults, uchar numCrafts);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);

    MCAPI void $_write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForItemStackRequestAction();
    // NOLINTEND
};
