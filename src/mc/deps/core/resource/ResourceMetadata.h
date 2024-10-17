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

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static char const* const& PRODUCT_TYPE_ADD_ON();

    // NOLINTEND
};
