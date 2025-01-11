#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct ItemStackNetIdVariant;
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
    ::ll::TypedStorage<4, 24, ::ItemStackNetIdVariant>                               mNetIdVariant;
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionMineBlock::PreValidationStatus> mPreValidationStatus;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void _write(::BinaryStream& stream) const /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~ItemStackRequestActionMineBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ItemStackRequestActionMineBlock::PreValidationStatus getPreValidationStatus() const;

    MCFOLD int getPredictedDurability() const;

    MCAPI ::ItemStackRequestSlotInfo getSrc() const;

    MCFOLD void setPreValidationStatus(::ItemStackRequestActionMineBlock::PreValidationStatus status) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
