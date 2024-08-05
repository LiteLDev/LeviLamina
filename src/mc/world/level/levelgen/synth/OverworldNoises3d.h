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
    MCAPI OverworldNoises3d(struct OverworldNoises3d const&);

    MCAPI struct ChunkLocalNoiseCache::CacheEntry computeNoiseValues(class DividedPos2d<4> const&) const;

    MCAPI struct TerrainInfo computeOffsetAndFactor(class DividedPos2d<4> const&) const;

    MCAPI struct TargetPoint sample(class BlockPos position) const;

    MCAPI struct TargetPoint sample(int, struct ChunkLocalNoiseCache::CacheEntry const&) const;

    MCAPI ~OverworldNoises3d();

    MCAPI static float computeInitialDensity(int, float, float, float);

    MCAPI static struct OverworldNoises3d make(class XoroshiroPositionalRandomFactory const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI OverworldNoises3d(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> humidityNoise, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> continentalnessNoise, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> erosionNoise, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> weirdnessNoise, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>);

    MCAPI struct ChunkLocalNoiseCache::CacheEntry _computeBaseValueSetForCacheEntry(class DividedPos2d<4> const&) const;

    // NOLINTEND
};
