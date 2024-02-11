#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionBeaconPayment : public ::ItemStackRequestAction {
public:
    // prevent constructor by default
    ItemStackRequestActionBeaconPayment& operator=(ItemStackRequestActionBeaconPayment const&);
    ItemStackRequestActionBeaconPayment(ItemStackRequestActionBeaconPayment const&);
    ItemStackRequestActionBeaconPayment();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemStackRequestActionBeaconPayment@@UEAA@XZ
    virtual ~ItemStackRequestActionBeaconPayment() = default;

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionBeaconPayment@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?_read@ItemStackRequestActionBeaconPayment@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
