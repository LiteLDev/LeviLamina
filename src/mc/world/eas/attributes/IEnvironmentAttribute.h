#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class IEnvironmentAttribute {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEnvironmentAttribute();

    virtual void sanitize() = 0;
    // NOLINTEND
};

} // namespace EAS
