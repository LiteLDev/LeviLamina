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

struct SurfaceBuilderBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkece6cf;
    ::ll::UntypedStorage<8, 8>  mUnkb4a1c7;
    ::ll::UntypedStorage<8, 8>  mUnk732515;
    ::ll::UntypedStorage<8, 8>  mUnk96b596;
    ::ll::UntypedStorage<8, 8>  mUnk18d6a7;
    ::ll::UntypedStorage<8, 8>  mUnk738df8;
    ::ll::UntypedStorage<8, 24> mUnkc52759;
    ::ll::UntypedStorage<8, 24> mUnkf4c91c;
    ::ll::UntypedStorage<8, 8>  mUnk5c2c42;
    ::ll::UntypedStorage<4, 4>  mUnk712a0f;
    ::ll::UntypedStorage<8, 8>  mUnka5b1b4;
    ::ll::UntypedStorage<8, 8>  mUnk1fc1c2;
    ::ll::UntypedStorage<1, 1>  mUnk7475a2;
    ::ll::UntypedStorage<1, 1>  mUnk31f605;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceBuilderBiomeComponentGlue& operator=(SurfaceBuilderBiomeComponentGlue const&);
    SurfaceBuilderBiomeComponentGlue(SurfaceBuilderBiomeComponentGlue const&);
    SurfaceBuilderBiomeComponentGlue();

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
    MCNAPI void makeAndSetSurfaceMaterialAttributes(::Biome& biome) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const& component, ::BiomeRegistry const&);

    MCNAPI void $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& component) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
