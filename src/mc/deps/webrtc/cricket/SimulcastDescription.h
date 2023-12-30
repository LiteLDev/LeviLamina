#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class SimulcastDescription {
public:
    // prevent constructor by default
    SimulcastDescription(SimulcastDescription const&);
    SimulcastDescription();

public:
    // NOLINTBEGIN
    // symbol: ?empty@SimulcastDescription@cricket@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ??4SimulcastDescription@cricket@@QEAAAEAV01@AEBV01@@Z
    MCAPI class cricket::SimulcastDescription& operator=(class cricket::SimulcastDescription const&);

    // symbol: ??1SimulcastDescription@cricket@@QEAA@XZ
    MCAPI ~SimulcastDescription();

    // NOLINTEND
};

}; // namespace cricket
