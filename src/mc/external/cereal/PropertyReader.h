#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class PropertyReader {
public:
    // prevent constructor by default
    PropertyReader& operator=(PropertyReader const&);
    PropertyReader(PropertyReader const&);
    PropertyReader();
};

}; // namespace cereal
