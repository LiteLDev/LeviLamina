#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct NatPunchthroughServerDebugInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NatPunchthroughServerDebugInterface() = default;

    virtual void OnServerMessage(char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
