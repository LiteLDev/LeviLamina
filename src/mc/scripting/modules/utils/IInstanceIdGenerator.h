#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IInstanceIdGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInstanceIdGenerator();

    virtual uint generate() = 0;
    // NOLINTEND
};
