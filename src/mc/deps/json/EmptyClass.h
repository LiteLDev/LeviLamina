#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

class EmptyClass {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSONUTIL_EMPTYCLASS
public:
    EmptyClass& operator=(EmptyClass const&) = delete;
    EmptyClass(EmptyClass const&)            = delete;
    EmptyClass()                             = delete;
#endif

public:
};

}; // namespace JsonUtil
