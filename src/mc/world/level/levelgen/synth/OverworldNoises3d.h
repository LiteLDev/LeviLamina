#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class XoroshiroPositionalRandomFactory;
struct TargetPoint;
// clang-format on

struct OverworldNoises3d {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>  mUnk366e4b;
    ::ll::UntypedStorage<8, 56>  mUnk36ae34;
    ::ll::UntypedStorage<8, 56>  mUnk26a2db;
    ::ll::UntypedStorage<8, 56>  mUnk2f028d;
    ::ll::UntypedStorage<8, 56>  mUnk8a04ce;
    ::ll::UntypedStorage<8, 56>  mUnkd30937;
    ::ll::UntypedStorage<8, 56>  mUnkd61cf8;
    ::ll::UntypedStorage<8, 512> mUnk8c808d;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldNoises3d& operator=(OverworldNoises3d const&);
    OverworldNoises3d();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OverworldNoises3d(::OverworldNoises3d const&);

    MCAPI OverworldNoises3d(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> temperatureNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> humidityNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> continentalnessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> erosionNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> weirdnessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> offsetNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> jaggedNoise
    );

    MCAPI ::ChunkLocalNoiseCache::CacheEntry _computeBaseValueSetForCacheEntry(::DividedPos2d<4> const& worldQuartPos
    ) const;

    MCAPI ::std::pair<float, float> computeErosionAndDepth(::BlockPos position) const;

    MCAPI ::ChunkLocalNoiseCache::CacheEntry computeNoiseValues(::DividedPos2d<4> const& worldQuartPos) const;

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
    MCAPI void* $ctor(::OverworldNoises3d const&);

    MCAPI void* $ctor(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> temperatureNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> humidityNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> continentalnessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> erosionNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> weirdnessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> offsetNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> jaggedNoise
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
