/**
 * @file  SubChunkBrightnessStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SubChunkBrightnessStorage.
 *
 */
class SubChunkBrightnessStorage {

#define AFTER_EXTRA
public:
    struct LightPair;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKBRIGHTNESSSTORAGE
public:
    class SubChunkBrightnessStorage& operator=(class SubChunkBrightnessStorage const &) = delete;
    SubChunkBrightnessStorage(class SubChunkBrightnessStorage const &) = delete;
#endif

public:
    /**
     * @hash   1574413641
     * @symbol ??0SubChunkBrightnessStorage@@QEAA@XZ
     */
    MCAPI SubChunkBrightnessStorage();
    /**
     * @hash   -708039560
     * @symbol ?reset@SubChunkBrightnessStorage@@QEAAX_N@Z
     */
    MCAPI void reset(bool);

};