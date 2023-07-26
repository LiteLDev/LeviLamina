#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

class EmptyClass {

public:
    // prevent constructor by default
    EmptyClass& operator=(EmptyClass const&) = delete;
    EmptyClass(EmptyClass const&)            = delete;
    EmptyClass()                             = delete;
};

}; // namespace JsonUtil
