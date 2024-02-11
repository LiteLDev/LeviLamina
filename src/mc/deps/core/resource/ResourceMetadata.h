#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceMetadata {
public:
    // prevent constructor by default
    ResourceMetadata& operator=(ResourceMetadata const&);
    ResourceMetadata(ResourceMetadata const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ResourceMetadata@@QEAA@XZ
    MCAPI ResourceMetadata();

    // symbol: ??1ResourceMetadata@@QEAA@XZ
    MCAPI ~ResourceMetadata();

    // symbol: ?PRODUCT_TYPE_ADD_ON@ResourceMetadata@@2PEBDEB
    MCAPI static char const* PRODUCT_TYPE_ADD_ON;

    // NOLINTEND
};
