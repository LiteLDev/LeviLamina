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
    struct ResolvedSurfaceMaterialAdjustments;
    struct SurfaceMaterialAdjustmentBlocks;
    // clang-format on

    // SurfaceMaterialAdjustmentsBiomeComponentGlue inner types define
    struct SurfaceMaterialAdjustmentBlocks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk392bc3;
        ::ll::UntypedStorage<8, 8> mUnkcf5027;
        ::ll::UntypedStorage<8, 8> mUnkc32840;
        ::ll::UntypedStorage<8, 8> mUnk9bb876;
        ::ll::UntypedStorage<8, 8> mUnk96b447;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceMaterialAdjustmentBlocks& operator=(SurfaceMaterialAdjustmentBlocks const&);
        SurfaceMaterialAdjustmentBlocks(SurfaceMaterialAdjustmentBlocks const&);
        SurfaceMaterialAdjustmentBlocks();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SurfaceMaterialAdjustmentBlocks();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ResolvedSurfaceMaterialAdjustments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40>  mUnkea2601;
        ::ll::UntypedStorage<8, 448> mUnk1e9415;
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
    // vIndex: 1
    virtual bool
    resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent, ::BiomeRegistry const&) /*override*/
        ;

    // vIndex: 2
    virtual void
    applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const
        /*override*/;

    // vIndex: 0
    virtual ~SurfaceMaterialAdjustmentsBiomeComponentGlue() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool
    $resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent, ::BiomeRegistry const&);

    MCAPI void
    $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
