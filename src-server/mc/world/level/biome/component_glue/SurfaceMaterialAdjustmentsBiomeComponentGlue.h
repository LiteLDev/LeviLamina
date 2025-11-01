#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
namespace SharedTypes::v1_20_60 { struct IBiomeJsonComponent; }
// clang-format on

struct SurfaceMaterialAdjustmentsBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // SurfaceMaterialAdjustmentsBiomeComponentGlue inner types declare
    // clang-format off
    struct ResolvedSurfaceMaterialAdjustments;
    struct SurfaceMaterialAdjustmentBlocks;
    // clang-format on
    
    // SurfaceMaterialAdjustmentsBiomeComponentGlue inner types define
    struct SurfaceMaterialAdjustmentBlocks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mTopMaterialBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mMidMaterialBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mSeaFloorMaterialBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mFoundationMaterialBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mSeaMaterialBlock;
        // NOLINTEND
    
    };
    
    struct ResolvedSurfaceMaterialAdjustments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::SurfaceMaterialAdjustmentsBiomeComponentGlue::SurfaceMaterialAdjustmentBlocks> mBlocks;
        ::ll::TypedStorage<8, 48, ::std::array<::std::optional<::ExpressionNode>, 2>> mHeightRangeExpressions;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SurfaceMaterialAdjustmentsBiomeComponentGlue::ResolvedSurfaceMaterialAdjustments>> mAdjustments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent, ::BiomeRegistry const&) /*override*/;

    // vIndex: 2
    virtual void applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const /*override*/;

    // vIndex: 0
    virtual ~SurfaceMaterialAdjustmentsBiomeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent, ::BiomeRegistry const&);

    MCAPI void $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
