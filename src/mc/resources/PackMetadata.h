#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackMetadata {

public:
    // prevent constructor by default
    PackMetadata& operator=(PackMetadata const&) = delete;
    PackMetadata(PackMetadata const&)            = delete;
    PackMetadata()                               = delete;
};
