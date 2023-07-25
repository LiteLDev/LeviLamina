#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Legacy {

struct WorldConversionReport {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACY_WORLDCONVERSIONREPORT
public:
    WorldConversionReport& operator=(WorldConversionReport const&) = delete;
    WorldConversionReport(WorldConversionReport const&)            = delete;
    WorldConversionReport()                                        = delete;
#endif

public:
};

}; // namespace Legacy
