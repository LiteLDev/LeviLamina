#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionMineBlock : public ::ItemStackRequestAction {
public:
    // ItemStackRequestActionMineBlock inner types define
    enum class PreValidationStatus : uchar {
        Valid   = 0,
        Invalid = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                    mPredictedDurability;
    ::ll::TypedStorage<4, 4, int>                                                    mSlot;
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant>                               mNetIdVariant;
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionMineBlock::PreValidationStatus> mPreValidationStatus;
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
