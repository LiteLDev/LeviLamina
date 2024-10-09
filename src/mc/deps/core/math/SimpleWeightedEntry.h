#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0>
struct SimpleWeightedEntry {
public:
    // prevent constructor by default
    SimpleWeightedEntry& operator=(SimpleWeightedEntry const&);
    SimpleWeightedEntry(SimpleWeightedEntry const&);
    SimpleWeightedEntry();
};

}; // namespace Core
