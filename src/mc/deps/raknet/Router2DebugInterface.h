#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct Router2DebugInterface {
public:
    // prevent constructor by default
    Router2DebugInterface& operator=(Router2DebugInterface const&);
    Router2DebugInterface(Router2DebugInterface const&);
    Router2DebugInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Router2DebugInterface();

    // vIndex: 1
    virtual void ShowFailure(char const*);

    // vIndex: 2
    virtual void ShowDiagnostic(char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $ShowFailure(char const*);

    MCAPI void $ShowDiagnostic(char const*);
    // NOLINTEND
};

} // namespace RakNet
