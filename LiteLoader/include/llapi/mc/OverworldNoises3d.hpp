/**
 * @file  OverworldNoises3d.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ChunkLocalNoiseCache.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure OverworldNoises3d.
 *
 */
struct OverworldNoises3d {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDNOISES3D
public:
    struct OverworldNoises3d& operator=(struct OverworldNoises3d const &) = delete;
    OverworldNoises3d() = delete;
#endif

public:
    /**
     * @hash   -1344188635
     * @symbol  ??0OverworldNoises3d\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI OverworldNoises3d(struct OverworldNoises3d const &);
    /**
     * @hash   -112057548
     * @symbol  ?computeErosionAndDepth\@OverworldNoises3d\@\@QEBA?AU?$pair\@MM\@std\@\@VBlockPos\@\@\@Z
     */
    MCAPI struct std::pair<float, float> computeErosionAndDepth(class BlockPos) const;
    /**
     * @hash   2095191851
     * @symbol  ?computeNoiseValues\@OverworldNoises3d\@\@QEBA?AUCacheEntry\@ChunkLocalNoiseCache\@\@AEBV?$DividedPos2d\@$03\@\@\@Z
     */
    MCAPI struct ChunkLocalNoiseCache::CacheEntry computeNoiseValues(class DividedPos2d<4> const &) const;
    /**
     * @hash   877086455
     * @symbol  ?computeOffsetAndFactor\@OverworldNoises3d\@\@QEBA?AUTerrainInfo\@\@AEBV?$DividedPos2d\@$03\@\@\@Z
     */
    MCAPI struct TerrainInfo computeOffsetAndFactor(class DividedPos2d<4> const &) const;
    /**
     * @hash   1483180856
     * @symbol  ?sample\@OverworldNoises3d\@\@QEBA?AUTargetPoint\@\@HAEBUCacheEntry\@ChunkLocalNoiseCache\@\@\@Z
     */
    MCAPI struct TargetPoint sample(int, struct ChunkLocalNoiseCache::CacheEntry const &) const;
    /**
     * @hash   1730211211
     * @symbol  ?sample\@OverworldNoises3d\@\@QEBA?AUTargetPoint\@\@VBlockPos\@\@\@Z
     */
    MCAPI struct TargetPoint sample(class BlockPos) const;
    /**
     * @hash   1831377620
     * @symbol  ??1OverworldNoises3d\@\@QEAA\@XZ
     */
    MCAPI ~OverworldNoises3d();
    /**
     * @hash   -1060517198
     * @symbol  ?computeInitialDensity\@OverworldNoises3d\@\@SAMHMMM\@Z
     */
    MCAPI static float computeInitialDensity(int, float, float, float);
    /**
     * @hash   -77475384
     * @symbol  ?make\@OverworldNoises3d\@\@SA?AU1\@AEBVXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI static struct OverworldNoises3d make(class XoroshiroPositionalRandomFactory const &);

//private:
    /**
     * @hash   -1581554854
     * @symbol  ??0OverworldNoises3d\@\@AEAA\@V?$NormalNoiseImpl\@$0A\@V?$MultiOctaveNoiseImpl\@$0A\@V?$ParityImprovedNoiseImpl\@$0A\@\@\@\@\@\@\@000000\@Z
     */
    MCAPI OverworldNoises3d(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>);
    /**
     * @hash   -527283270
     * @symbol  ?_computeBaseValueSetForCacheEntry\@OverworldNoises3d\@\@AEBA?AUCacheEntry\@ChunkLocalNoiseCache\@\@AEBV?$DividedPos2d\@$03\@\@\@Z
     */
    MCAPI struct ChunkLocalNoiseCache::CacheEntry _computeBaseValueSetForCacheEntry(class DividedPos2d<4> const &) const;

};