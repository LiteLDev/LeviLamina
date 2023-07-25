#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerRuntimeIdTag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERRUNTIMEIDTAG
public:
    ContainerRuntimeIdTag& operator=(ContainerRuntimeIdTag const&) = delete;
    ContainerRuntimeIdTag(ContainerRuntimeIdTag const&)            = delete;
    ContainerRuntimeIdTag()                                        = delete;
#endif

public:
};
