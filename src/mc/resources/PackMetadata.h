#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackMetadata {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKMETADATA
public:
    PackMetadata& operator=(PackMetadata const&) = delete;
    PackMetadata(PackMetadata const&)            = delete;
    PackMetadata()                               = delete;
#endif

public:
};
