/**
 * @file  MC/WorldGenCache.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldGenCache.
 *
 */
class WorldGenCache {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENCACHE
public:
    class WorldGenCache& operator=(class WorldGenCache const &) = delete;
    WorldGenCache(class WorldGenCache const &) = delete;
    WorldGenCache() = delete;
#endif

public:
    /**
     * @hash   -1073978238
     * @symbol ??0WorldGenCache@@QEAA@VChunkLocalNoiseCache@@VSurfaceLevelCache@@@Z
     */
    MCAPI WorldGenCache(class ChunkLocalNoiseCache, class SurfaceLevelCache);
    /**
     * @hash   -1879201962
     * @symbol ?getChunkLocalNoiseCache@WorldGenCache@@QEBAAEBVChunkLocalNoiseCache@@XZ
     */
    MCAPI class ChunkLocalNoiseCache const & getChunkLocalNoiseCache() const;
    /**
     * @hash   2075180452
     * @symbol ?getSurfaceLevelCache@WorldGenCache@@QEBAAEBVSurfaceLevelCache@@XZ
     */
    MCAPI class SurfaceLevelCache const & getSurfaceLevelCache() const;
    /**
     * @hash   -938643120
     * @symbol ??1WorldGenCache@@QEAA@XZ
     */
    MCAPI ~WorldGenCache();

};