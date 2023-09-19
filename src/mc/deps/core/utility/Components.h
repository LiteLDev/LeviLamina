#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Url {

struct Components {
public:
    // prevent constructor by default
    Components& operator=(Components const&);
    Components(Components const&);
    Components();

public:
    // NOLINTBEGIN
    // symbol: ??1Components@Url@Util@@QEAA@XZ
    MCAPI ~Components();

    // NOLINTEND
};

}; // namespace Util::Url
