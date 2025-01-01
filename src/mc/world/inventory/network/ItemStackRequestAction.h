#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStackRequestActionCraftBase;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionType> mActionType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestAction();

    // vIndex: 1
    virtual ::ItemStackRequestActionCraftBase const* getCraftAction() const;

    // vIndex: 2
    virtual int getFilteredStringIndex() const;

    // vIndex: 3
    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4
    virtual void _write(::BinaryStream&) const = 0;

    // vIndex: 5
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemStackRequestAction(::ItemStackRequestActionType actionType);

    MCAPI ::ItemStackRequestActionType getActionType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::std::unique_ptr<::ItemStackRequestAction>> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::ItemStackRequestActionType, ::std::string> const& actionTypeMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStackRequestActionType actionType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackRequestActionCraftBase const* $getCraftAction() const;

    MCAPI int $getFilteredStringIndex() const;

    MCAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
