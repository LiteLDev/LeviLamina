#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Error {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_ERROR
public:
    Error& operator=(Error const&) = delete;
    Error(Error const&)            = delete;
    Error()                        = delete;
#endif

public:
};

}; // namespace Scripting
