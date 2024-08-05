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
    MCAPI struct ServerPlayerInventoryTransactionComponent&
    operator=(struct ServerPlayerInventoryTransactionComponent&&);

    // NOLINTEND
};
