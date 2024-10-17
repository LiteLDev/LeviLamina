#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct EngineError {
public:
    // prevent constructor by default
    EngineError& operator=(EngineError const&);
    EngineError(EngineError const&);

public:
    // NOLINTBEGIN
    MCAPI EngineError();

    MCAPI ~EngineError();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
