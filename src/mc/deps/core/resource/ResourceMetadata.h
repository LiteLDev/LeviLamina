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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static char const* const& PRODUCT_TYPE_ADD_ON();

    // NOLINTEND
};
