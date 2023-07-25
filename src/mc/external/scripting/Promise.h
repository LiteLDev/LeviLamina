#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0, typename T1, typename T2>
class Promise {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_PROMISE
public:
    Promise& operator=(Promise const&) = delete;
    Promise(Promise const&)            = delete;
    Promise()                          = delete;
#endif

public:
};

}; // namespace Scripting
