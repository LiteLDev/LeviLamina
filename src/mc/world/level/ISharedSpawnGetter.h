#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class ISharedSpawnGetter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISharedSpawnGetter() = default;

    virtual ::BlockPos const& getSharedSpawnPosition() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
