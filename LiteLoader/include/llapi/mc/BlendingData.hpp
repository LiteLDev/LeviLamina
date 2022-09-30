/**
 * @file  BlendingData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlendingData.
 *
 */
class BlendingData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLENDINGDATA
public:
    class BlendingData& operator=(class BlendingData const &) = delete;
    BlendingData(class BlendingData const &) = delete;
    BlendingData() = delete;
#endif

public:
    /**
     * @hash   -746697729
     * @symbol ?createDataForStorage@BlendingData@@QEBA?AUPersistentBlendData@@W4BlendVersion@@@Z
     */
    MCAPI struct PersistentBlendData createDataForStorage(enum class BlendVersion) const;
    /**
     * @hash   175230508
     * @symbol ?getBiome@BlendingData@@QEBA?AV?$ScalarOptional@E@@HHH@Z
     */
    MCAPI class ScalarOptional<unsigned char> getBiome(int, int, int) const;
    /**
     * @hash   1798218939
     * @symbol ?getBlockType@BlendingData@@QEBA?AW4BlendingBlockType@@HHH@Z
     */
    MCAPI enum class BlendingBlockType getBlockType(int, int, int) const;
    /**
     * @hash   -577029319
     * @symbol ?getDensity@BlendingData@@QEBA?AV?$ScalarOptional@M@@HHH@Z
     */
    MCAPI class ScalarOptional<float> getDensity(int, int, int) const;
    /**
     * @hash   -1674217667
     * @symbol ?getHeight@BlendingData@@QEBA?AV?$ScalarOptional@F@@HH@Z
     */
    MCAPI class ScalarOptional<short> getHeight(int, int) const;
    /**
     * @hash   1735774760
     * @symbol ?hasBlendDataAt@BlendingData@@QEBA_NHH@Z
     */
    MCAPI bool hasBlendDataAt(int, int) const;

};