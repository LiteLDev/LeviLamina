#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/ItemStackRequestSlotInfo.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionTransferBase : public ::ItemStackRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mIsDstSerialized;
    ::ll::TypedStorage<1, 1, bool>                        mIsAmountSerialized;
    ::ll::TypedStorage<1, 1, uchar>                       mAmount;
    ::ll::TypedStorage<4, 40, ::ItemStackRequestSlotInfo> mSrc;
    ::ll::TypedStorage<4, 40, ::ItemStackRequestSlotInfo> mDst;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionTransferBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~ItemStackRequestActionTransferBase() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ItemStackRequestActionTransferBase(
        ::ItemStackRequestActionType      actionType,
        uchar                             amount,
        ::ItemStackRequestSlotInfo const& src,
        ::ItemStackRequestSlotInfo const& dst,
        bool                              isDstSerialized,
        bool                              isAmountSerialized
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::ItemStackRequestActionType      actionType,
        uchar                             amount,
        ::ItemStackRequestSlotInfo const& src,
        ::ItemStackRequestSlotInfo const& dst,
        bool                              isDstSerialized,
        bool                              isAmountSerialized
    );
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
