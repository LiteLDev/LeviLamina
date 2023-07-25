#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextId {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_CONTEXTID
public:
    ContextId& operator=(ContextId const&) = delete;
    ContextId(ContextId const&)            = delete;
    ContextId()                            = delete;
#endif

public:
};

}; // namespace Scripting
