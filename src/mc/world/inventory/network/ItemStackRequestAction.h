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
    // prevent constructor by default
    ItemStackRequestAction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestAction();

    virtual ::ItemStackRequestActionCraftBase const* getCraftAction() const;

    virtual int getFilteredStringIndex() const;

    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);

    virtual void _write(::BinaryStream& stream) const = 0;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemStackRequestAction(::ItemStackRequestActionType actionType);

    MCFOLD ::ItemStackRequestActionType getActionType() const;

    MCAPI void write(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string const getActionTypeName(::ItemStackRequestActionType type);

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
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ItemStackRequestActionCraftBase const* $getCraftAction() const;

    MCFOLD int $getFilteredStringIndex() const;

    MCFOLD void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
