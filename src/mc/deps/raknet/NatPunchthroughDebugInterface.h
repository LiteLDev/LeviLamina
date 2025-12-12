#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct NatPunchthroughDebugInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NatPunchthroughDebugInterface() = default;

    virtual void OnClientMessage(char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
