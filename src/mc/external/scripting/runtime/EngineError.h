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
};

}; // namespace Scripting
