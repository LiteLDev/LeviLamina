#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerRuntimeIdTag {
public:
    // prevent constructor by default
    ContainerRuntimeIdTag& operator=(ContainerRuntimeIdTag const&);
    ContainerRuntimeIdTag(ContainerRuntimeIdTag const&);
    ContainerRuntimeIdTag();
};
