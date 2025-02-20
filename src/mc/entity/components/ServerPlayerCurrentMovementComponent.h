#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerCurrentMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkc49fdc;
    ::ll::UntypedStorage<4, 12>  mUnk890bf9;
    ::ll::UntypedStorage<4, 8>   mUnk951ddc;
    ::ll::UntypedStorage<4, 8>   mUnk67c2f5;
    ::ll::UntypedStorage<1, 1>   mUnk2fd3a5;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerCurrentMovementComponent& operator=(ServerPlayerCurrentMovementComponent const&);
    ServerPlayerCurrentMovementComponent(ServerPlayerCurrentMovementComponent const&);
    ServerPlayerCurrentMovementComponent();
};
