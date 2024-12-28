#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0>
class RefCountedSet {
public:
    // prevent constructor by default
    RefCountedSet& operator=(RefCountedSet const&);
    RefCountedSet(RefCountedSet const&);
    RefCountedSet();
};

} // namespace Core
