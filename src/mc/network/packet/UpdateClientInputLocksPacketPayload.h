#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ClientInputLockComponent;
// clang-format on

struct UpdateClientInputLocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mInputLockComponentData;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateClientInputLocksPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UpdateClientInputLocksPacketPayload(::ClientInputLockComponent const& inputLockComponent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ClientInputLockComponent const& inputLockComponent);
    // NOLINTEND
};
