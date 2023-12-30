#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0>
class FinalRefCountedObject {
public:
    // prevent constructor by default
    FinalRefCountedObject& operator=(FinalRefCountedObject const&);
    FinalRefCountedObject(FinalRefCountedObject const&);
    FinalRefCountedObject();
};

}; // namespace rtc
