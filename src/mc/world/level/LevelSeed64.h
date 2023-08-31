#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {

public:
    uint64_t mValue;

    // prevent constructor by default
    LevelSeed64& operator=(LevelSeed64 const&) = delete;
    LevelSeed64(LevelSeed64 const&)            = delete;
    LevelSeed64()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?to32BitRandomSeed\@LevelSeed64\@\@QEBAIXZ
     */
    MCAPI uint32_t to32BitRandomSeed() const;
    /**
     * @symbol ?fromUnsigned32\@LevelSeed64\@\@SA?AV1\@I\@Z
     */
    MCAPI static class LevelSeed64 fromUnsigned32(uint32_t);
    // NOLINTEND
};
