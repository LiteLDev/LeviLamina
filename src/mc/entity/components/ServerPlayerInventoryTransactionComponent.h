#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerInventoryTransactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk860296;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerInventoryTransactionComponent& operator=(ServerPlayerInventoryTransactionComponent const&);
    ServerPlayerInventoryTransactionComponent(ServerPlayerInventoryTransactionComponent const&);
    ServerPlayerInventoryTransactionComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ServerPlayerInventoryTransactionComponent& operator=(::ServerPlayerInventoryTransactionComponent&&);
    // NOLINTEND
};
