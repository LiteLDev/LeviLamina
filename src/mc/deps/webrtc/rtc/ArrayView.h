#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0, int T1>
class ArrayView {
public:
    // prevent constructor by default
    ArrayView& operator=(ArrayView const&);
    ArrayView(ArrayView const&);
    ArrayView();
};

}; // namespace rtc
