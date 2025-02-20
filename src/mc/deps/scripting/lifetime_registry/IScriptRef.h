#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IScriptRef {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptRef() = default;

    // vIndex: 1
    virtual void onReduceToSingleOwner() = 0;

    // vIndex: 2
    virtual void onPromoteToMultipleOwners() = 0;

    // vIndex: 3
    virtual void onFinalize() = 0;
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

} // namespace Scripting
