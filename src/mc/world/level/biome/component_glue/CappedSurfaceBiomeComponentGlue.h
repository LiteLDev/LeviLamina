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
    ::ll::UntypedStorage<8, 24> mUnkcda77f;
    ::ll::UntypedStorage<8, 24> mUnk1425f2;
    ::ll::UntypedStorage<8, 8>  mUnkbd03ef;
    ::ll::UntypedStorage<8, 8>  mUnk8fd969;
    ::ll::UntypedStorage<8, 8>  mUnk5cea50;
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
    virtual ~CappedSurfaceBiomeComponentGlue() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
