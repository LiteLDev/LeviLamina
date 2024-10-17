#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#include "mc/world/level/levelgen/synth/ParityImprovedNoiseImpl.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

struct OverworldNoises3d {
public:
    // prevent constructor by default
    OverworldNoises3d& operator=(OverworldNoises3d const&);
    OverworldNoises3d();

public:
    // NOLINTBEGIN
    MCAPI OverworldNoises3d(struct OverworldNoises3d const&);

    MCAPI struct ChunkLocalNoiseCache::CacheEntry computeNoiseValues(class DividedPos2d<4> const& worldQuartPos) const;

    MCAPI struct TerrainInfo computeOffsetAndFactor(class DividedPos2d<4> const& worldQuartPos) const;

    MCAPI struct TargetPoint sample(class BlockPos position) const;

    MCAPI struct TargetPoint sample(int blockY, struct ChunkLocalNoiseCache::CacheEntry const& cachedNoises) const;

    MCAPI ~OverworldNoises3d();

    MCAPI static float
    computeInitialDensity(int blockY, float biomeDensityOffset, float biomeDensityFactor, float biomeDensityJaggedness);

    MCAPI static struct OverworldNoises3d make(class XoroshiroPositionalRandomFactory const& randomFactory);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI OverworldNoises3d(
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> temperatureNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> humidityNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> continentalnessNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> erosionNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> weirdnessNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> offsetNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> jaggedNoise
    );

    MCAPI struct ChunkLocalNoiseCache::CacheEntry
    _computeBaseValueSetForCacheEntry(class DividedPos2d<4> const& worldQuartPos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct OverworldNoises3d const&);

    MCAPI void* ctor$(
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> temperatureNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> humidityNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> continentalnessNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> erosionNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> weirdnessNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> offsetNoise,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> jaggedNoise
    );

    MCAPI void dtor$();

    // NOLINTEND
};
