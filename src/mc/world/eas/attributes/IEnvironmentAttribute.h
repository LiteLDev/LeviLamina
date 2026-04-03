#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class IEnvironmentAttribute {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEnvironmentAttribute() = default;

    virtual void sanitize() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace EAS
