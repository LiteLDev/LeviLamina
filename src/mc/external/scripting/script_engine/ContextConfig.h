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
    MCAPI void* ctor$(struct Scripting::ContextConfig const&);

    MCAPI void* ctor$(struct Scripting::ContextConfig&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
