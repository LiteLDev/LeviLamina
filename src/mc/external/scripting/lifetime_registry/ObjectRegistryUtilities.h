#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::internal {

struct ObjectRegistryUtilities {
public:
    // prevent constructor by default
    ObjectRegistryUtilities& operator=(ObjectRegistryUtilities const&);
    ObjectRegistryUtilities(ObjectRegistryUtilities const&);
    ObjectRegistryUtilities();
};

} // namespace Scripting::internal
