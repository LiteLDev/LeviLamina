#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/world/components/MultiOctaveNoiseImpl.h"
#include "mc/world/components/NormalNoiseImpl.h"
#include "mc/world/components/ParityImprovedNoiseImpl.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

struct OverworldNoises3d {
public:
    // prevent constructor by default
    OverworldNoises3d& operator=(OverworldNoises3d const&);
    OverworldNoises3d();

public:
    // NOLINTBEGIN
    // symbol: ??0OverworldNoises3d@@QEAA@AEBU0@@Z
    MCAPI OverworldNoises3d(struct OverworldNoises3d const&);

    // symbol: ?computeErosionAndDepth@OverworldNoises3d@@QEBA?AU?$pair@MM@std@@VBlockPos@@@Z
    MCAPI std::pair<float, float> computeErosionAndDepth(class BlockPos position) const;

    // symbol: ?computeNoiseValues@OverworldNoises3d@@QEBA?AUCacheEntry@ChunkLocalNoiseCache@@AEBV?$DividedPos2d@$03@@@Z
    MCAPI struct ChunkLocalNoiseCache::CacheEntry computeNoiseValues(class DividedPos2d<4> const&) const;

    // symbol: ?computeOffsetAndFactor@OverworldNoises3d@@QEBA?AUTerrainInfo@@AEBV?$DividedPos2d@$03@@@Z
    MCAPI struct TerrainInfo computeOffsetAndFactor(class DividedPos2d<4> const&) const;

    // symbol: ?sample@OverworldNoises3d@@QEBA?AUTargetPoint@@VBlockPos@@@Z
    MCAPI struct TargetPoint sample(class BlockPos position) const;

    // symbol: ?sample@OverworldNoises3d@@QEBA?AUTargetPoint@@HAEBUCacheEntry@ChunkLocalNoiseCache@@@Z
    MCAPI struct TargetPoint sample(int, struct ChunkLocalNoiseCache::CacheEntry const&) const;

    // symbol: ??1OverworldNoises3d@@QEAA@XZ
    MCAPI ~OverworldNoises3d();

    // symbol: ?computeInitialDensity@OverworldNoises3d@@SAMHMMM@Z
    MCAPI static float computeInitialDensity(int, float, float, float);

    // symbol: ?make@OverworldNoises3d@@SA?AU1@AEBVXoroshiroPositionalRandomFactory@@@Z
    MCAPI static struct OverworldNoises3d make(class XoroshiroPositionalRandomFactory const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0OverworldNoises3d@@AEAA@V?$NormalNoiseImpl@$0A@V?$MultiOctaveNoiseImpl@$0A@V?$ParityImprovedNoiseImpl@$0A@@@@@@@000000@Z
    MCAPI OverworldNoises3d(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> humidityNoise, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> continentalnessNoise, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> erosionNoise, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> weirdnessNoise, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>);

    // symbol:
    // ?_computeBaseValueSetForCacheEntry@OverworldNoises3d@@AEBA?AUCacheEntry@ChunkLocalNoiseCache@@AEBV?$DividedPos2d@$03@@@Z
    MCAPI struct ChunkLocalNoiseCache::CacheEntry _computeBaseValueSetForCacheEntry(class DividedPos2d<4> const&) const;

    // NOLINTEND
};
