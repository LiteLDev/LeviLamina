#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerMovementSyncComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc5e620;
    ::ll::UntypedStorage<8, 16> mUnkc5eeb3;
    ::ll::UntypedStorage<4, 12> mUnk2cd9e5;
    ::ll::UntypedStorage<4, 48> mUnkf23a33;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerMovementSyncComponent& operator=(ServerPlayerMovementSyncComponent const&);
    ServerPlayerMovementSyncComponent(ServerPlayerMovementSyncComponent const&);
    ServerPlayerMovementSyncComponent();
};
