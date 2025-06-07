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

struct CappedSurfaceBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk51c66e;
    ::ll::UntypedStorage<8, 24> mUnkcaf8a8;
    ::ll::UntypedStorage<8, 8>  mUnk70b64c;
    ::ll::UntypedStorage<8, 8>  mUnk1e1153;
    ::ll::UntypedStorage<8, 8>  mUnk70dea7;
    // NOLINTEND

public:
    // prevent constructor by default
    CappedSurfaceBiomeComponentGlue& operator=(CappedSurfaceBiomeComponentGlue const&);
    CappedSurfaceBiomeComponentGlue(CappedSurfaceBiomeComponentGlue const&);
    CappedSurfaceBiomeComponentGlue();

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
    virtual ~CappedSurfaceBiomeComponentGlue() /*override*/ = default;
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
