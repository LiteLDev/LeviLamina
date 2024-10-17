#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct TagsProxy {
public:
    // prevent constructor by default
    TagsProxy& operator=(TagsProxy const&);
    TagsProxy(TagsProxy const&);
    TagsProxy();

public:
    // NOLINTBEGIN
    MCAPI void fromString(std::string const& expression);

    MCAPI ~TagsProxy();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
