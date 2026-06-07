#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class Random;
// clang-format on

class BlockSelector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockSelector() = default;

    virtual ::Block const& next(::Random&, int, int, int, bool) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
