#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0, typename T1>
class Signal {
public:
    // prevent constructor by default
    Signal& operator=(Signal const&);
    Signal(Signal const&);
    Signal();
};

} // namespace Bedrock
