#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {
public:
    uint64 mValue;

public:
    // NOLINTBEGIN
    // symbol: ?to32BitRandomSeed@LevelSeed64@@QEBAIXZ
    MCAPI uint to32BitRandomSeed() const;

    // symbol: ?fromUnsigned32@LevelSeed64@@SA?AV1@I@Z
    MCAPI static class LevelSeed64 fromUnsigned32(uint value);

    // NOLINTEND
};
