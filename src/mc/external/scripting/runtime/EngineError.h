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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
