#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0, int T1>
class StackString {

public:
    // prevent constructor by default
    StackString& operator=(StackString const&) = delete;
    StackString(StackString const&)            = delete;
    StackString()                              = delete;
};

}; // namespace Core
