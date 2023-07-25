#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0, int T1>
class StackString {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_STACKSTRING
public:
    StackString& operator=(StackString const&) = delete;
    StackString(StackString const&)            = delete;
    StackString()                              = delete;
#endif

public:
};

}; // namespace Core
