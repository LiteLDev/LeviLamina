#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class TelemetryFacet {
public:
    // prevent constructor by default
    TelemetryFacet& operator=(TelemetryFacet const&);
    TelemetryFacet(TelemetryFacet const&);
    TelemetryFacet();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TelemetryFacet@OreUI@@UEAA@XZ
    virtual ~TelemetryFacet() = default;

    // NOLINTEND
};

}; // namespace OreUI
