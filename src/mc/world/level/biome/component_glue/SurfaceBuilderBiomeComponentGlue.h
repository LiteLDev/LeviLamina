#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
namespace SharedTypes::v1_20_60 { struct IBiomeJsonComponent; }
// clang-format on

struct SurfaceBuilderBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                            mSeaFloorDepth;
    ::ll::TypedStorage<8, 8, ::Block const*>                 mSeaFloorMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                 mFoundationMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                 mMidMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                 mTopMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                 mSeaMaterialBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mFloorMaterialBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mCeilingMaterialBlocks;
    ::ll::TypedStorage<8, 8, ::Block const*>                 mBeachMaterialBlock;
    ::ll::TypedStorage<4, 4, int>                            mMaxPuddleDepthBelowSeaLevel;
    ::ll::TypedStorage<8, 8, ::Block const*>                 mClayMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                 mHardClayMaterialBlock;
    ::ll::TypedStorage<1, 1, bool>                           mBrycePillars;
    ::ll::TypedStorage<1, 1, bool>                           mHasForest;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool resolveAndValidate(
        ::SharedTypes::v1_20_60::IBiomeJsonComponent const& component,
        ::BiomeRegistry const&
    ) /*override*/;

    virtual void applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& component) const
        /*override*/;

    virtual ~SurfaceBuilderBiomeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void makeAndSetSurfaceMaterialAttributes(::Biome& biome) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool
    $resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const& component, ::BiomeRegistry const&);

    MCAPI void $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& component) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
