#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionBeaconPayment : public ::ItemStackRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4d0b04;
    ::ll::UntypedStorage<4, 4> mUnk2cb397;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionBeaconPayment& operator=(ItemStackRequestActionBeaconPayment const&);
    ItemStackRequestActionBeaconPayment(ItemStackRequestActionBeaconPayment const&);
    ItemStackRequestActionBeaconPayment();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void _write(::BinaryStream& stream) const /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~ItemStackRequestActionBeaconPayment() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getPrimaryEffectId() const;

    MCAPI int getSecondaryEffectId() const;
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
