#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
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
    ::ll::TypedStorage<8, 40, ::ItemStackRequestSlotInfo> mSrc;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestSlotInfo> mDst;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void _write(::BinaryStream&) const /*override*/;
#else // LL_PLAT_C
    virtual void _write(::BinaryStream& stream) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) /*override*/;
#else // LL_PLAT_C
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $_write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
