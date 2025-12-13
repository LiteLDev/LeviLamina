#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IScriptRef {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptRef() = default;

    virtual void onReduceToSingleOwner() = 0;

    virtual void onPromoteToMultipleOwners() = 0;

    virtual void onFinalize() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
