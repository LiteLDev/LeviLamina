#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SimulcastLayer {
public:
    // prevent constructor by default
    SimulcastLayer& operator=(SimulcastLayer const&);
    SimulcastLayer();

public:
    // NOLINTBEGIN
    // symbol: ??0SimulcastLayer@cricket@@QEAA@AEBU01@@Z
    MCAPI SimulcastLayer(struct cricket::SimulcastLayer const&);

    // symbol: ??0SimulcastLayer@cricket@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    MCAPI SimulcastLayer(std::string_view, bool);

    // symbol: ??1SimulcastLayer@cricket@@QEAA@XZ
    MCAPI ~SimulcastLayer();

    // NOLINTEND
};

}; // namespace cricket
