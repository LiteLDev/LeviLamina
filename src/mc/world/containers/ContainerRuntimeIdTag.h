#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerRuntimeIdTag {

public:
    // prevent constructor by default
    ContainerRuntimeIdTag& operator=(ContainerRuntimeIdTag const&) = delete;
    ContainerRuntimeIdTag(ContainerRuntimeIdTag const&)            = delete;
    ContainerRuntimeIdTag()                                        = delete;
};
