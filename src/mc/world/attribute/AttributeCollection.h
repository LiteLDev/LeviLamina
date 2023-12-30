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
    // symbol: ?hasAttribute@AttributeCollection@@SA_NAEBVHashedString@@@Z
    MCAPI static bool hasAttribute(class HashedString const& name);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?instance@AttributeCollection@@CAAEAV1@XZ
    MCAPI static class AttributeCollection& instance();

    // NOLINTEND
};
