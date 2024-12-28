#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0>
class RefCountedNonVirtual {
public:
    // prevent constructor by default
    RefCountedNonVirtual& operator=(RefCountedNonVirtual const&);
    RefCountedNonVirtual(RefCountedNonVirtual const&);
    RefCountedNonVirtual();
};

} // namespace rtc
