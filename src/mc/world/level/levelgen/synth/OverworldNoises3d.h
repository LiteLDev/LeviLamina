#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/biome/TerrainShaper.h"
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class XoroshiroPositionalRandomFactory;
struct TargetPoint;
struct TerrainInfo;
// clang-format on

struct OverworldNoises3d {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mTemperatureNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mHumidityNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mContinentalnessNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mErosionNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mWeirdnessNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mOffsetNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
                                                      mJaggedNoise;
    ::ll::TypedStorage<8, 512, ::TerrainShaper const> mTerrainShaper;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    OverworldNoises3d& operator=(OverworldNoises3d const&);
    OverworldNoises3d(OverworldNoises3d const&);
    OverworldNoises3d();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI OverworldNoises3d(::OverworldNoises3d&&);
#endif

    MCAPI ::ChunkLocalNoiseCache::CacheEntry
    _computeBaseValueSetForCacheEntry(::DividedPos2d<4> const& worldQuartPos) const;

    MCAPI ::ChunkLocalNoiseCache::CacheEntry computeNoiseValues(::DividedPos2d<4> const& worldQuartPos) const;

    MCAPI ::TerrainInfo computeOffsetAndFactor(::DividedPos2d<4> const& worldQuartPos) const;

    MCAPI ::TargetPoint sample(::BlockPos position) const;

    MCAPI ~OverworldNoises3d();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OverworldNoises3d make(::XoroshiroPositionalRandomFactory const& randomFactory);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::OverworldNoises3d&&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
