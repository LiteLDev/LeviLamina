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

struct MesaSurfaceBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk456120;
    ::ll::UntypedStorage<8, 8> mUnk39a049;
    ::ll::UntypedStorage<8, 8> mUnk4cb516;
    ::ll::UntypedStorage<8, 8> mUnk906edf;
    ::ll::UntypedStorage<8, 8> mUnk2aee26;
    ::ll::UntypedStorage<8, 8> mUnke3a3c8;
    ::ll::UntypedStorage<8, 8> mUnk5e74ea;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceBiomeComponentGlue& operator=(MesaSurfaceBiomeComponentGlue const&);
    MesaSurfaceBiomeComponentGlue(MesaSurfaceBiomeComponentGlue const&);
    MesaSurfaceBiomeComponentGlue();

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
    virtual ~MesaSurfaceBiomeComponentGlue() /*override*/;
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
