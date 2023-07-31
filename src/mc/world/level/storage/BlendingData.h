#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ScalarOptional.h"

class BlendingData {

public:
    // prevent constructor by default
    BlendingData& operator=(BlendingData const&) = delete;
    BlendingData(BlendingData const&)            = delete;
    BlendingData()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getBiome\@BlendingData\@\@QEBA?AV?$ScalarOptional\@E\@\@HHH\@Z
     */
    MCAPI class ScalarOptional<unsigned char> getBiome(int, int, int) const;
    /**
     * @symbol ?getBlockType\@BlendingData\@\@QEBA?AW4BlendingBlockType\@\@HHH\@Z
     */
    MCAPI enum class BlendingBlockType getBlockType(int, int, int) const;
    /**
     * @symbol ?getDensity\@BlendingData\@\@QEBA?AV?$ScalarOptional\@M\@\@HHH\@Z
     */
    MCAPI class ScalarOptional<float> getDensity(int, int, int) const;
    /**
     * @symbol ?getHeight\@BlendingData\@\@QEBA?AV?$ScalarOptional\@F\@\@HH\@Z
     */
    MCAPI class ScalarOptional<short> getHeight(int, int) const;
    /**
     * @symbol ?hasBlendDataAt\@BlendingData\@\@QEBA_NHH\@Z
     */
    MCAPI bool hasBlendDataAt(int, int) const;
    // NOLINTEND
};
