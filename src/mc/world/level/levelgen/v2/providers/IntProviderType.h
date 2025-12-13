#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct IntProviderType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IntProviderType() = default;

    virtual int sample(::IRandom&) const = 0;

    virtual int maxValue() const = 0;

    virtual int minValue() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
