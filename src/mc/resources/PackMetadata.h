#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackMetadata {
public:
    // prevent constructor by default
    PackMetadata& operator=(PackMetadata const&);
    PackMetadata(PackMetadata const&);
    PackMetadata();
};
