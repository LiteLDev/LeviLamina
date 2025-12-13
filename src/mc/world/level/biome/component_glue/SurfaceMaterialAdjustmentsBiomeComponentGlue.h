#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
namespace SharedTypes::v1_20_60 { struct IBiomeJsonComponent; }
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
        ::ll::UntypedStorage<8, 8> mUnk4f4521;
        ::ll::UntypedStorage<8, 8> mUnk11b4f4;
        ::ll::UntypedStorage<8, 8> mUnkd474c1;
        ::ll::UntypedStorage<8, 8> mUnkb4b385;
        ::ll::UntypedStorage<8, 8> mUnk9d08cc;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceMaterialAdjustmentBlocks& operator=(SurfaceMaterialAdjustmentBlocks const&);
        SurfaceMaterialAdjustmentBlocks(SurfaceMaterialAdjustmentBlocks const&);
        SurfaceMaterialAdjustmentBlocks();
    };

    struct ResolvedSurfaceMaterialAdjustments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnkea2601;
        ::ll::UntypedStorage<8, 48> mUnk1e9415;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedSurfaceMaterialAdjustments& operator=(ResolvedSurfaceMaterialAdjustments const&);
        ResolvedSurfaceMaterialAdjustments(ResolvedSurfaceMaterialAdjustments const&);
        ResolvedSurfaceMaterialAdjustments();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk958937;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceMaterialAdjustmentsBiomeComponentGlue& operator=(SurfaceMaterialAdjustmentsBiomeComponentGlue const&);
    SurfaceMaterialAdjustmentsBiomeComponentGlue(SurfaceMaterialAdjustmentsBiomeComponentGlue const&);
    SurfaceMaterialAdjustmentsBiomeComponentGlue();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool resolveAndValidate(
        ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent,
        ::BiomeRegistry const&
    ) /*override*/;

    virtual void
    applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const
        /*override*/;

    virtual ~SurfaceMaterialAdjustmentsBiomeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent, ::BiomeRegistry const&);

    MCNAPI void
    $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
