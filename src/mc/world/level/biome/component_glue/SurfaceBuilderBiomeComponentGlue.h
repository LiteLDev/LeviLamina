#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
struct NoiseBlockSpecifier;
// clang-format on

struct SurfaceBuilderBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // SurfaceBuilderBiomeComponentGlue inner types define
    enum class BuilderType : uchar {
        Surface    = 0,
        Subsurface = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                             mSeaFloorDepth;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mSeaFloorMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mFoundationMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mMidMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mTopMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mSeaMaterialBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>                  mFloorMaterialBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>                  mCeilingMaterialBlocks;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mBeachMaterialBlock;
    ::ll::TypedStorage<4, 4, int>                                             mMaxPuddleDepthBelowSeaLevel;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mClayMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mHardClayMaterialBlock;
    ::ll::TypedStorage<1, 1, bool>                                            mBrycePillars;
    ::ll::TypedStorage<1, 1, bool>                                            mHasForest;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>                  mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::NoiseBlockSpecifier>>           mGradientBlockRanges;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_26_30::NoiseDescriptor>       mNoiseDescriptor;
    ::ll::TypedStorage<1, 1, ::SurfaceBuilderBiomeComponentGlue::BuilderType> mBuilderType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool resolveAndValidate(::entt::meta_any const& component, ::BiomeRegistry const&) /*override*/;

    virtual void applyToBiome(::Biome& biome, ::entt::meta_any const& component) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $resolveAndValidate(::entt::meta_any const& component, ::BiomeRegistry const&);

    MCAPI void $applyToBiome(::Biome& biome, ::entt::meta_any const& component) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
