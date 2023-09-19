#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Legacy {

struct WorldConversionReport {
public:
    // prevent constructor by default
    WorldConversionReport& operator=(WorldConversionReport const&);
    WorldConversionReport(WorldConversionReport const&);
    WorldConversionReport();
};

}; // namespace Legacy
