#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {
public:
    // LevelSeed64 inner types define
    using ValueType = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mValue;
    // NOLINTEND
};
