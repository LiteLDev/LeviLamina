#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextConfig {
public:
    // prevent constructor by default
    ContextConfig& operator=(ContextConfig const&);
    ContextConfig();

public:
    // NOLINTBEGIN
    MCAPI ContextConfig(struct Scripting::ContextConfig&&);

    MCAPI ContextConfig(struct Scripting::ContextConfig const&);

    MCAPI struct Scripting::ContextConfig& operator=(struct Scripting::ContextConfig&&);

    MCAPI ~ContextConfig();

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
