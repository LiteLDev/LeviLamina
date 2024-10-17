#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementDataExtractionUtility {

struct Extractors {
public:
    // prevent constructor by default
    Extractors& operator=(Extractors const&);
    Extractors(Extractors const&);
    Extractors();
};

}; // namespace MovementDataExtractionUtility
