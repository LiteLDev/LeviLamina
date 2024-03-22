#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlatteningUtils {

struct Instance {
public:
    // prevent constructor by default
    Instance& operator=(Instance const&);
    Instance(Instance const&);
    Instance();

public:
    // NOLINTBEGIN
    // symbol: ??1Instance@FlatteningUtils@@QEAA@XZ
    MCAPI ~Instance();

    // NOLINTEND
};

}; // namespace FlatteningUtils
