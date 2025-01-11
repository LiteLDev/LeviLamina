#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct Router2DebugInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Router2DebugInterface() = default;

    // vIndex: 1
    virtual void ShowFailure(char const*);

    // vIndex: 2
    virtual void ShowDiagnostic(char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
