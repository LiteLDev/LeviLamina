#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefintionDescription {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefintionDescription() = default;

    virtual char const* getJsonName() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
