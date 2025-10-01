#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/NoiseCellInterpolator.h"

// auto generated forward declare list
// clang-format off
class Block;
class OreVeinifierNoises;
class Vec3;
// clang-format on

class OreVeinifier {
public:
    // OreVeinifier inner types declare
    // clang-format off
    struct OreVein;
    // clang-format on

    // OreVeinifier inner types define
    using InterpolatorArray = ::std::array<::NoiseCellInterpolator*, 3>;

    struct OreVein {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> oreBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> rawOreBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> fillerBlock;
        ::ll::TypedStorage<4, 4, int const>      minY;
        ::ll::TypedStorage<4, 4, int const>      maxY;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mVeininessNoise;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mVeinNoiseA;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mVeinNoiseB;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mVeininessNoiseInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mVeinNoiseInterpolatorA;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mVeinNoiseInterpolatorB;
    ::ll::TypedStorage<8, 8, ::OreVeinifierNoises const&>                       mNoiseSource;
    ::ll::TypedStorage<8, 32, ::OreVeinifier::OreVein const>                    mCopperVein;
    ::ll::TypedStorage<8, 32, ::OreVeinifier::OreVein const>                    mIronVein;
    // NOLINTEND

public:
    // prevent constructor by default
    OreVeinifier& operator=(OreVeinifier const&);
    OreVeinifier(OreVeinifier const&);
    OreVeinifier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OreVeinifier(::OreVeinifierNoises const& noiseSource);

    MCAPI void fillNoiseAtPos(::Vec3 const& worldPos, int bufferIndex, float noiseValue);

    MCAPI ::Block const* getVeinBlockOrFallback(::Vec3 worldPos, ::Block const* defaultBlock) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreVeinifierNoises const& noiseSource);
    // NOLINTEND
};
