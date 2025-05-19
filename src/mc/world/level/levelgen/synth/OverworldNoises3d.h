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
    MCNAPI OverworldNoises3d(::OverworldNoises3d const&);

    MCNAPI OverworldNoises3d(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> temperatureNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> humidityNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> continentalnessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> erosionNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> weirdnessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> offsetNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> jaggedNoise
    );

    MCNAPI ::ChunkLocalNoiseCache::CacheEntry
    _computeBaseValueSetForCacheEntry(::DividedPos2d<4> const& worldQuartPos) const;

    MCNAPI ::std::pair<float, float> computeErosionAndDepth(::BlockPos position) const;

    MCNAPI ::ChunkLocalNoiseCache::CacheEntry computeNoiseValues(::DividedPos2d<4> const& worldQuartPos) const;

    MCNAPI ::TargetPoint sample(::BlockPos position) const;

    MCNAPI ~OverworldNoises3d();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::OverworldNoises3d make(::XoroshiroPositionalRandomFactory const& randomFactory);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OverworldNoises3d const&);

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};
