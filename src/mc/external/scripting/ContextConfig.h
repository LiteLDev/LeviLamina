#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextConfig {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_CONTEXTCONFIG
public:
    ContextConfig& operator=(ContextConfig const&) = delete;
    ContextConfig(ContextConfig const&)            = delete;
    ContextConfig()                                = delete;
#endif

public:
};

}; // namespace Scripting
