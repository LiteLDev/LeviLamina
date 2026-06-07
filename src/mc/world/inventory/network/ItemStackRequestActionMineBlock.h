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
struct ItemStackRequestSlotInfo;
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
    virtual void _write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionMineBlock();

#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestActionMineBlock(int slot, int predictedDurability, ::ItemStackNetIdVariant netId);
#endif

    MCNAPI ::ItemStackRequestSlotInfo getSrc() const;

    MCNAPI void setPreValidationStatus(::ItemStackRequestActionMineBlock::PreValidationStatus status) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(int slot, int predictedDurability, ::ItemStackNetIdVariant netId);
#endif
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
