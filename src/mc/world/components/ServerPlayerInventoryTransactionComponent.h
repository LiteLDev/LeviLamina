#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerInventoryTransactionComponent {
public:
    // prevent constructor by default
    ServerPlayerInventoryTransactionComponent& operator=(ServerPlayerInventoryTransactionComponent const&);
    ServerPlayerInventoryTransactionComponent(ServerPlayerInventoryTransactionComponent const&);
    ServerPlayerInventoryTransactionComponent();

public:
    // NOLINTBEGIN
    // symbol: ??4ServerPlayerInventoryTransactionComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ServerPlayerInventoryTransactionComponent&
    operator=(struct ServerPlayerInventoryTransactionComponent&&);

    // NOLINTEND
};
