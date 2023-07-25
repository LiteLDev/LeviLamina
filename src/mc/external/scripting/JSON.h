#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct JSON {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_JSON
public:
    JSON& operator=(JSON const&) = delete;
    JSON(JSON const&)            = delete;
    JSON()                       = delete;
#endif

public:
};

}; // namespace Scripting
