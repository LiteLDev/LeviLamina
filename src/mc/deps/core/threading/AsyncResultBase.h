#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class AsyncResultBase {
public:
    // prevent constructor by default
    AsyncResultBase& operator=(AsyncResultBase const&);
    AsyncResultBase(AsyncResultBase const&);
    AsyncResultBase();
};

} // namespace Bedrock::Threading
