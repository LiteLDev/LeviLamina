#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionBeaconPayment : public ::ItemStackRequestAction {
public:
    // prevent constructor by default
    ItemStackRequestActionBeaconPayment& operator=(ItemStackRequestActionBeaconPayment const&);
    ItemStackRequestActionBeaconPayment(ItemStackRequestActionBeaconPayment const&);
    ItemStackRequestActionBeaconPayment();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionBeaconPayment() = default;

    // vIndex: 4
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI int getPrimaryEffectId() const;

    MCAPI int getSecondaryEffectId() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI void _write$(class BinaryStream& stream) const;

    // NOLINTEND
};
