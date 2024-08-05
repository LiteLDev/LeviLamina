#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {
public:
    // prevent constructor by default
    LevelSeed64& operator=(LevelSeed64 const&);
    LevelSeed64(LevelSeed64 const&);
    LevelSeed64();

public:
    // NOLINTBEGIN
    MCAPI uint to32BitRandomSeed() const;

    MCAPI static class LevelSeed64 fromUnsigned32(uint value);

    // NOLINTEND
};
