#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0, typename T1, typename T2>
class Promise {

public:
    // prevent constructor by default
    Promise& operator=(Promise const&) = delete;
    Promise(Promise const&)            = delete;
    Promise()                          = delete;
};

}; // namespace Scripting
