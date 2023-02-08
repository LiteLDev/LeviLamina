/**
 * @file  BlendingData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   132917103
     * @symbol  ?createDataForStorage\@BlendingData\@\@QEBA?AUPersistentBlendData\@\@W4BlendVersion\@\@\@Z
     */
    MCAPI struct PersistentBlendData createDataForStorage(enum class BlendVersion) const;
    /**
     * @hash   1054845340
     * @symbol  ?getBiome\@BlendingData\@\@QEBA?AV?$ScalarOptional\@E\@\@HHH\@Z
     */
    MCAPI class ScalarOptional<unsigned char> getBiome(int, int, int) const;
    /**
     * @hash   -1617133525
     * @symbol  ?getBlockType\@BlendingData\@\@QEBA?AW4BlendingBlockType\@\@HHH\@Z
     */
    MCAPI enum class BlendingBlockType getBlockType(int, int, int) const;
    /**
     * @hash   302585513
     * @symbol  ?getDensity\@BlendingData\@\@QEBA?AV?$ScalarOptional\@M\@\@HHH\@Z
     */
    MCAPI class ScalarOptional<float> getDensity(int, int, int) const;
    /**
     * @hash   -794602835
     * @symbol  ?getHeight\@BlendingData\@\@QEBA?AV?$ScalarOptional\@F\@\@HH\@Z
     */
    MCAPI class ScalarOptional<short> getHeight(int, int) const;
    /**
     * @hash   -1679577704
     * @symbol  ?hasBlendDataAt\@BlendingData\@\@QEBA_NHH\@Z
     */
    MCAPI bool hasBlendDataAt(int, int) const;

};