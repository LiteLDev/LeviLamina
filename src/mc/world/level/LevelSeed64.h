#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {
public:
    uint64 mValue;

    explicit LevelSeed64(uint64 value) : mValue(value) {}

public:
    // NOLINTBEGIN
    MCAPI uint to32BitRandomSeed() const;

    MCAPI static class LevelSeed64 fromUnsigned32(uint value);

    // NOLINTEND
};
