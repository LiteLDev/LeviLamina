#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Legacy {

struct WorldConversionReport {

public:
    // prevent constructor by default
    WorldConversionReport& operator=(WorldConversionReport const&) = delete;
    WorldConversionReport(WorldConversionReport const&)            = delete;
    WorldConversionReport()                                        = delete;
};

}; // namespace Legacy
