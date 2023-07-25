#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ClassBinding {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_CLASSBINDING
public:
    ClassBinding& operator=(ClassBinding const&) = delete;
    ClassBinding(ClassBinding const&)            = delete;
    ClassBinding()                               = delete;
#endif

public:
};

}; // namespace Scripting
