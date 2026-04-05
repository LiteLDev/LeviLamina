#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::VMemFlags {

enum class VMemFlagsType : int {
    // bitfield representation
    ProtectionChange = 0,
    Reserve          = 1 << 0,
    Commit           = 1 << 1,
    Decommit         = 1 << 2,
    Release          = 1 << 3,
};

}
