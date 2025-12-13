#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct Router2DebugInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Router2DebugInterface() = default;

    virtual void ShowFailure(char const*);

    virtual void ShowDiagnostic(char const*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
