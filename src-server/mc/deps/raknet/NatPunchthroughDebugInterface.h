#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct NatPunchthroughDebugInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatPunchthroughDebugInterface() = default;

    // vIndex: 1
    virtual void OnClientMessage(char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
