#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceMetadata {
public:
    // prevent constructor by default
    ResourceMetadata& operator=(ResourceMetadata const&);
    ResourceMetadata(ResourceMetadata const&);

public:
    // NOLINTBEGIN
    MCAPI ResourceMetadata();

    MCAPI ~ResourceMetadata();

    MCAPI static char const* PRODUCT_TYPE_ADD_ON;

    // NOLINTEND
};
