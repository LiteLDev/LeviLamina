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

struct SwampSurfaceBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc589f3;
    ::ll::UntypedStorage<8, 8> mUnk2c4840;
    ::ll::UntypedStorage<8, 8> mUnk7ffe21;
    ::ll::UntypedStorage<8, 8> mUnkb2410f;
    ::ll::UntypedStorage<8, 8> mUnkb4f236;
    // NOLINTEND

public:
    // prevent constructor by default
    SwampSurfaceBiomeComponentGlue& operator=(SwampSurfaceBiomeComponentGlue const&);
    SwampSurfaceBiomeComponentGlue(SwampSurfaceBiomeComponentGlue const&);
    SwampSurfaceBiomeComponentGlue();

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
    virtual ~SwampSurfaceBiomeComponentGlue() /*override*/ = default;
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
