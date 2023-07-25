#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSEED64
public:
    LevelSeed64& operator=(LevelSeed64 const&) = delete;
    LevelSeed64(LevelSeed64 const&)            = delete;
    LevelSeed64()                              = delete;
#endif

public:
    /**
     * @symbol ?to32BitRandomSeed\@LevelSeed64\@\@QEBAIXZ
     */
    MCAPI unsigned int to32BitRandomSeed() const;
    /**
     * @symbol ?fromUnsigned32\@LevelSeed64\@\@SA?AV1\@I\@Z
     */
    MCAPI static class LevelSeed64 fromUnsigned32(unsigned int);
};
