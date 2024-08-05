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
    MCAPI ~Components();

    // NOLINTEND
};

}; // namespace Util::Url
