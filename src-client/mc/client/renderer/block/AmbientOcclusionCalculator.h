#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/AOBlockData.h"
#include "mc/deps/core/math/Color.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockTessellatorCache;
struct BrightnessPair;
struct PrecompCache;
// clang-format on

class AmbientOcclusionCalculator {
public:
    // AmbientOcclusionCalculator inner types declare
    // clang-format off
    struct AocConfiguration;
    // clang-format on

    // AmbientOcclusionCalculator inner types define
    struct AocConfiguration {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mTintSides;
    ::ll::TypedStorage<1, 1, bool>                              mDoSeasons;
    ::ll::TypedStorage<1, 1, bool>                              mTouchEdge;
    ::ll::TypedStorage<4, 24, float[6]>                         mFaceShading;
    ::ll::TypedStorage<8, 8, ::BlockTessellatorCache&>          mCache;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                 mCenterPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                    mCenterBlock;
    ::ll::TypedStorage<4, 16, ::mce::Color>                     mBaseColor;
    ::ll::TypedStorage<8, 8, ::BrightnessPair*>                 mOutputLightTexturePositons;
    ::ll::TypedStorage<8, 8, ::mce::Color*>                     mOutputColors;
    ::ll::TypedStorage<8, 624, ::std::array<::AOBlockData, 26>> mAOBlockCacheData;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientOcclusionCalculator& operator=(AmbientOcclusionCalculator const&);
    AmbientOcclusionCalculator(AmbientOcclusionCalculator const&);
    AmbientOcclusionCalculator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AmbientOcclusionCalculator(
        ::BlockPos const&                                     centerPos,
        ::Block const&                                        centerBlock,
        ::BlockTessellatorCache&                              cache,
        ::AmbientOcclusionCalculator::AocConfiguration const& configuration
    );

    MCAPI ::PrecompCache _getCache();

    MCAPI void calculate(uchar face);

    MCAPI void calculateBoxAverage(bool);

    MCAPI void calculateWithCache(uchar face);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockPos const&                                     centerPos,
        ::Block const&                                        centerBlock,
        ::BlockTessellatorCache&                              cache,
        ::AmbientOcclusionCalculator::AocConfiguration const& configuration
    );
    // NOLINTEND
};
