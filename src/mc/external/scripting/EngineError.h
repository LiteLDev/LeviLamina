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
    // symbol: ??0EngineError@Scripting@@QEAA@XZ
    MCAPI EngineError();

    // symbol: ??1EngineError@Scripting@@QEAA@XZ
    MCAPI ~EngineError();

    // NOLINTEND
};

}; // namespace Scripting
