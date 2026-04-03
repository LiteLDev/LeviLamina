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
// clang-format on

struct SurfaceMaterialAdjustmentsBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // SurfaceMaterialAdjustmentsBiomeComponentGlue inner types declare
    // clang-format off
    struct SurfaceMaterialAdjustmentBlocks;
    struct ResolvedSurfaceMaterialAdjustments;
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
        ::ll::TypedStorage<8, 40, ::SurfaceMaterialAdjustmentsBiomeComponentGlue::SurfaceMaterialAdjustmentBlocks>
                                                                                      mBlocks;
        ::ll::TypedStorage<8, 48, ::std::array<::std::optional<::ExpressionNode>, 2>> mHeightRangeExpressions;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::SurfaceMaterialAdjustmentsBiomeComponentGlue::ResolvedSurfaceMaterialAdjustments>>
        mAdjustments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool resolveAndValidate(::entt::meta_any const& biomeJsonComponent, ::BiomeRegistry const&) /*override*/;

    virtual void applyToBiome(::Biome& biome, ::entt::meta_any const& biomeJsonComponent) const /*override*/;

    virtual ~SurfaceMaterialAdjustmentsBiomeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $resolveAndValidate(::entt::meta_any const& biomeJsonComponent, ::BiomeRegistry const&);

    MCAPI void $applyToBiome(::Biome& biome, ::entt::meta_any const& biomeJsonComponent) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
