#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IInstanceIdGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInstanceIdGenerator() = default;

    virtual uint generate() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
