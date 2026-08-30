#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefintionDescription {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefintionDescription();

    virtual char const* getJsonName() const = 0;
    // NOLINTEND
};
