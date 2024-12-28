#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class IDeferredDebugUpdate {
public:
    // prevent constructor by default
    IDeferredDebugUpdate& operator=(IDeferredDebugUpdate const&);
    IDeferredDebugUpdate(IDeferredDebugUpdate const&);
    IDeferredDebugUpdate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDeferredDebugUpdate();

    // vIndex: 1
    virtual void apply() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace mce
