#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefintionDescription {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefintionDescription() = default;

    // vIndex: 1
    virtual char const* getJsonName() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
