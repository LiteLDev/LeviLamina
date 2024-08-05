#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeCollection {
public:
    // prevent constructor by default
    AttributeCollection& operator=(AttributeCollection const&);
    AttributeCollection(AttributeCollection const&);
    AttributeCollection();

public:
    // NOLINTBEGIN
    MCAPI static bool hasAttribute(class HashedString const& name);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class AttributeCollection& instance();

    // NOLINTEND
};
