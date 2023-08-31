#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ScalarOptional.h"
#include "mc/world/level/block/utils/BlendingBlockType.h"

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
    MCAPI class ScalarOptional<uint8_t> getBiome(int32_t, int32_t, int32_t) const;
    /**
     * @symbol ?getBlockType\@BlendingData\@\@QEBA?AW4BlendingBlockType\@\@HHH\@Z
     */
    MCAPI enum class BlendingBlockType getBlockType(int32_t, int32_t, int32_t) const;
    /**
     * @symbol ?getDensity\@BlendingData\@\@QEBA?AV?$ScalarOptional\@M\@\@HHH\@Z
     */
    MCAPI class ScalarOptional<float> getDensity(int32_t, int32_t, int32_t) const;
    /**
     * @symbol ?getHeight\@BlendingData\@\@QEBA?AV?$ScalarOptional\@F\@\@HH\@Z
     */
    MCAPI class ScalarOptional<int16_t> getHeight(int32_t, int32_t) const;
    /**
     * @symbol ?hasBlendDataAt\@BlendingData\@\@QEBA_NHH\@Z
     */
    MCAPI bool hasBlendDataAt(int32_t, int32_t) const;
    // NOLINTEND
};
