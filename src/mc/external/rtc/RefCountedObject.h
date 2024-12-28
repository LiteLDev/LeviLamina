#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0>
class RefCountedObject {
public:
    // prevent constructor by default
    RefCountedObject& operator=(RefCountedObject const&);
    RefCountedObject(RefCountedObject const&);
    RefCountedObject();
};

} // namespace rtc
