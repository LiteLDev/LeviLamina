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

struct SurfaceParametersBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfb4c8c;
    ::ll::UntypedStorage<8, 8> mUnkc4377d;
    ::ll::UntypedStorage<8, 8> mUnk5f6d98;
    ::ll::UntypedStorage<8, 8> mUnk4156cd;
    ::ll::UntypedStorage<8, 8> mUnkaa4ad0;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceParametersBiomeComponentGlue& operator=(SurfaceParametersBiomeComponentGlue const&);
    SurfaceParametersBiomeComponentGlue(SurfaceParametersBiomeComponentGlue const&);
    SurfaceParametersBiomeComponentGlue();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool resolveAndValidate(
        ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent,
        ::BiomeRegistry const&
    ) /*override*/;

    // vIndex: 2
    virtual void
    applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const
        /*override*/;

    // vIndex: 0
    virtual ~SurfaceParametersBiomeComponentGlue() /*override*/ = default;
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
