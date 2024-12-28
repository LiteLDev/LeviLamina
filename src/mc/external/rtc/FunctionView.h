#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0>
class FunctionView {
public:
    // prevent constructor by default
    FunctionView& operator=(FunctionView const&);
    FunctionView(FunctionView const&);
    FunctionView();
};

} // namespace rtc
